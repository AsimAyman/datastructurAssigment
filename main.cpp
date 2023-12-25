#include <iostream> // lib to system calls
#include "stack.h"
#include <chrono>
#include <thread>
#include <cstdlib>

enum class SortOrder { ASCENDING, DESCENDING };
using namespace std;// to enable me to use cin and cout functions

template<class T>


void insertInSortedOrder(Stack<T>& s, const T& t, SortOrder order) {
    T top;
    if (!s.stackIsEmpty()) {
        s.getTop(top); // Retrieves the top element of the stack

        // If the order is ascending and the new element is greater than the top element, push it
        if ((order == SortOrder::ASCENDING && t > top) ||
            (order == SortOrder::DESCENDING && t < top)) {
            s.push(t);
            return;
        }

        T temp;
        s.pop(temp); // Remove the top element from the stack
        insertInSortedOrder(s, t, order); // Recursively call to find the correct position for the new element
        s.push(temp); // Place the removed element back after the insertion of new element
    } else {
        s.push(t); // If the stack is empty, simply push the new element
    }
}


template<class T>
void sortStack(Stack<T>& s, SortOrder order) {
    if (!s.stackIsEmpty()) {
        int t;
        s.pop(t); // Remove an element from the stack
        sortStack(s, order);  // Recursively sort the remaining elements in the stack
        insertInSortedOrder(s, t, order);  // Insert the removed element in sorted order
    }
    
}



void displaySortingMessage() {
    const int numDots = 10; // Number of dots in the ellipsis
    const int delayMs = 1000; // Delay between each iteration in milliseconds

    cout << "Sorting";
    for (int i = 0; i < numDots; ++i) {
        cout << '.';
        cout.flush(); // Flush the output to display the dot immediately
        this_thread::sleep_for(chrono::milliseconds(delayMs));
    }
    cout << endl;
}

int main() {        // program start point
	Stack<int> s1;
    int sortOrderInput;
    cout << "Enter sorting order (0 for Ascending, 1 for Descending): ";
    cin>>sortOrderInput;
    SortOrder sortOrder = SortOrder::ASCENDING;
    if (sortOrderInput == 1) {
        sortOrder = SortOrder::DESCENDING;
    }
    int v1 ,v2,v3,v4;  
    cout<<"Enter v1=> ";
    cin>>v1;
    cout<<"Enter v2=> ";
    cin>>v2;
    cout<<"Enter v3=> ";
    cin>>v3;
    cout<<"Enter v4=> ";
    cin>>v4;

    s1.push(v1);
    s1.push(v2);
    s1.push(v3);
    s1.push(v4);
   
system("cls");

    cout << "Stack before sorting:" << endl;
    s1.displayStackVisual();
    cout << endl;

    displaySortingMessage();
    sortStack(s1, sortOrder);

    cout << "\nSorted Stack:" << endl;
    s1.displayStackVisual();



    return 0;
}