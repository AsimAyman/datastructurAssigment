#include <iostream> // lib to system calls
#include "stack.h"
using namespace std;// to enable me to use cin and cout functions

void insertInSortedOrder(Stack& s, int t) {
    int top;
    s.getTop(top); // Retrieves the top element of the stack

    // If the stack is empty or the new element is greater than the top element, push it
    if (s.stackIsEmpty() || t > top) {
        s.push(t);
        return;
    }

    int temp;
    s.pop(temp); // Remove the top element from the stack
    insertInSortedOrder(s, t); // Recursively call to find the correct position for the new element
    s.push(temp); // Place the removed element back after the insertion of new element
}
void sortStack(Stack& s) {
    if (!s.stackIsEmpty()) {
        int t;
        s.pop(t); // Remove an element from the stack
        sortStack(s); // Recursively sort the remaining elements in the stack
        insertInSortedOrder(s, t); // Insert the removed element in sorted order
    }
}
int main() {        // program start point
	    Stack s1;
    int v1 = 10;
    int v2 = 2;
    int v3 = 20;
    int v4 = 4;


    s1.push(v1);
    s1.push(v2);
    s1.push(v3);
    s1.push(v4);
    sortStack(s1);
	s1.printStack();


    return 0;
}