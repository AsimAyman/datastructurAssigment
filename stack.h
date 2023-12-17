#ifndef STACK_H //to make sure there is no another header file with the same name
#define STACK_H//creating the header file with the name of stack

class Stack{// the blue print of an list based stack
	int* stack;  // pointer point to an dynamic int array which present the stack
	int maxSize; // the maxSize size of the stack
	int top;    //index of the stack where the push/pop will happen 
	int count;   // contains the current count of stack
public:
	Stack(int s = 100); //used to create an object(initiallezing)
	~Stack();	//used to destroy an object(declear the memory location)
	bool stackIsEmpty()const;  //returns true if the stack has no elements
	bool stackIsFull()const; //reutrns true if the count reached to maxsize
	void push(int&); // add an new element to to the top
	void pop(int&); // remove an element from the top
	void getTop(int&)const; // get the elemnt of the rear without removing it
	void size(int&)const; // get the size of current stack
	void printStack()const; //to print the content of the stack
};


#endif 