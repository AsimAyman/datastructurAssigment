This repository contains a console-based C++ program that demonstrates sorting elements in a stack in either ascending or descending order using a custom stack implementation.

Overview
The program allows users to input values into a stack and sort them based on their preference of sorting order. It provides a visual representation of the stack before and after sorting using ASCII art.

Usage
Prerequisites
C++ Compiler: Ensure you have a C++ compiler installed. The program is written in C++.
Terminal or Command Prompt: To run the program, use a terminal or command prompt environment.
Instructions
Clone the repository to your local machine:

bash
Copy code
git clone https://github.com/AsimAyman/datastructurAssigment.git
Navigate to the project directory:

bash
Copy code
cd datastructurAssigment
Compile the program:

bash
Copy code
g++ -o main main.cpp stack.cpp
Run the compiled program:

bash
Copy code
./main
Follow the on-screen instructions:

Enter the sorting order (0 for ascending, 1 for descending).
Input values for the stack when prompted.
View the sorted stack in the console output with ASCII art representation.

Stack Implementation
The stack is implemented using C++ classes and templates.
The Stack class includes functionalities like pushing elements, popping elements, checking stack emptiness, and getting the top element.
Sorting is achieved through recursive functions for inserting elements in sorted order.
