#include "stack.h"
#include <iostream>
//used to create an object(initiallezing)
template<class T>
Stack<T>::Stack(int size ) { // defult size = 100;
    maxSize = size;
	stack = new int[maxSize];
	count = 0;
	top = -1;
}
//used to destroy an object(declear the memory location)
template<class T>
Stack<T>::~Stack() {
	delete[] stack;//declear the dymanic memory allocated to the pointer.
}
//returns true if the stack has no elements
template<class T>
bool Stack<T>::stackIsEmpty()const {
	return (top == -1);
}
//reutrns true if the count reached to maxsize
template<class T>
bool Stack<T>::stackIsFull()const {
	return (count == maxSize);
}
//add an element to the top 
template<class T>
void Stack<T>::push(const T& e) {
	if (stackIsFull()) std::cout<<"stack is full"<<std::endl;
	else {
		stack[++top] = e;
		count++;
	}
}
//remove an element to the top
template<class T>
void Stack<T>::pop(T& e) {
	if (stackIsEmpty())std::cout<<"stack is already empty"<<std::endl;
	else {
		e = stack[top--];
		count--;
	}
}
// get the elemnt of the rear without removing it 
template<class T>
void Stack<T>::getTop(T& e)const {
	if (stackIsEmpty())std::cout<<"stack is already empty"<<std::endl;
	else e = stack[top];
}
//return the size
template<class T>
void Stack<T>::size(int& s)const {
	s = count;
}
//to print the content of the slack
template<class T>
void Stack<T>::printStack()const{ 
	 for(int i = 0;i<count;i++){
	std::cout<<stack[i]<<std::endl;
 }
}

// ... (insertInSortedOrder and sortStack remain unchanged)
template<class T>
void Stack<T>::displayStackVisual()const {
    std::cout << "Current Stack:" << std::endl;
    std::cout << "-------------" << std::endl;
    if (stackIsEmpty()) {
        std::cout << "Empty Stack" << std::endl;
    } else {
        for (int i = count; i >= 0; --i) {
            std::cout << "| " << stack[i] << " |" << std::endl;
            std::cout << "-------------" << std::endl;
        }
    }
}