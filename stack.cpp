#include "stack.h"
#include <iostream>
//used to create an object(initiallezing)

Stack::Stack(int size ) { // defult size = 100;
    maxSize = size;
	stack = new int[maxSize];
	count = 0;
	top = -1;
}
//used to destroy an object(declear the memory location)

Stack::~Stack() {
	delete[] stack;//declear the dymanic memory allocated to the pointer.
}
//returns true if the stack has no elements

bool Stack::stackIsEmpty()const {
	return (top == -1);
}
//reutrns true if the count reached to maxsize

bool Stack::stackIsFull()const {
	return (count == maxSize);
}
//add an element to the top 

void Stack::push(int& e) {
	if (stackIsFull()) std::cout<<"stack is full"<<std::endl;
	else {
		stack[++top] = e;
		count++;
	}
}
//remove an element to the top

void Stack::pop(int& e) {
	if (stackIsEmpty())std::cout<<"stack is already empty"<<std::endl;
	else {
		e = stack[top--];
		count--;
	}
}
// get the elemnt of the rear without removing it 

void Stack::getTop(int& e)const {
	if (stackIsEmpty())std::cout<<"stack is already empty"<<std::endl;
	else e = stack[top];
}
//return the size

void Stack::size(int& s)const {
	s = count;
}
//to print the content of the slack
void Stack::printStack()const{ 
	 for(int i = 0;i<count;i++){
	std::cout<<stack[i]<<std::endl;
 }
}
