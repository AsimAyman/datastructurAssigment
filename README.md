# Data Structure Assignment

This repository contains a console-based C++ program that demonstrates sorting elements in a stack in either ascending or descending order using a custom stack implementation.

## Overview

The program allows users to input values into a stack and sort them based on their preference of sorting order. It provides a visual representation of the stack before and after sorting using ASCII art.

## Usage

### Prerequisites

- **C++ Compiler**: Ensure you have a C++ compiler installed. The program is written in C++.
- **Terminal or Command Prompt**: To run the program, use a terminal or command prompt environment.

### Instructions

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/AsimAyman/datastructurAssigment.git
    ```

2. Navigate to the project directory:

    ```bash
    cd datastructurAssigment
    ```

3. Compile the program:

    ```bash
    g++ -o main main.cpp stack.cpp
    ```

4. Run the compiled program:

    ```bash
    ./main
    ```

5. Follow the on-screen instructions:
   - Enter the sorting order (0 for ascending, 1 for descending).
   - Input values for the stack when prompted.

6. View the sorted stack in the console output with ASCII art representation.

### Stack Implementation

- The stack is implemented using C++ classes and templates.
- The `Stack` class includes functionalities like pushing elements, popping elements, checking stack emptiness, and getting the top element.
- Sorting is achieved through recursive functions for inserting elements in sorted order.
