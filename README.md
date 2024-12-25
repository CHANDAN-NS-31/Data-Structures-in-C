# Data-Structures-in-C

# Rat in a Maze Problem using Backtracking in C

## Description
This repository contains a C program to solve the **Rat in a Maze problem** using **Backtracking**. The objective is to find a path from the top-left corner to the bottom-right corner in a maze. The maze is represented by a 2D matrix, where `1` represents open paths and `0` represents blocked paths. The program attempts to find a solution by moving right or down from the start and backtracking when necessary.

---

## Features
- **Backtracking Approach**: Solves the maze using backtracking, exploring possible paths recursively and unmarking invalid paths.
- **Maze Representation**: The maze is represented as a 2D matrix of size `5x5` (modifiable).
- **Solution Path**: If a solution exists, the path is printed as `1`s in the matrix, with `0`s marking the unvisited locations.

---

## Code Overview

### **1. isSafe() Function**
Checks if a given cell `(x, y)` is a valid position to move to, meaning:
- The cell is within bounds.
- The cell is not blocked (value is `1`).

### **2. solveMaze() Function**
This function initializes the solution matrix and calls the recursive helper function `solveMazeUtil()` to find a solution.

### **3. solveMazeUtil() Function**
A recursive utility function that tries to find a valid path. It:
- Marks the current cell as part of the solution path.
- Tries moving in the down and right directions.
- Backtracks if no valid move is found.

---

# Infix to Postfix Conversion Using Stack in C

## Description
This C program converts an infix expression (like `a+b*(c^d-e)^(f+g*h)-i`) into its corresponding postfix expression (like `ab+cd^e-*fg*h+^i-`). The program uses a stack to handle operators and parentheses efficiently.

Infix expressions are commonly used in arithmetic operations, while postfix (Reverse Polish Notation) expressions do not require parentheses or operator precedence rules. This program implements a stack-based approach to handle the conversion.

---

## Features
- **Stack Implementation**: Uses an array-based stack to manage operators and operands.
- **Operator Precedence**: Handles precedence for operators `+`, `-`, `*`, `/`, and `^`.
- **Parentheses Handling**: Supports parentheses to group sub-expressions.
- **Expression Conversion**: Converts a valid infix expression to a postfix expression using a stack.

---

# Array Implementation of Queue in C

## Description
This C program demonstrates the array-based implementation of a queue. A queue is a linear data structure that follows the **FIFO (First In First Out)** principle, meaning the element inserted first is the one removed first. The program provides the basic operations of a queue: inserting an element, deleting an element, and displaying all elements of the queue.

---

## Features
- **Insert operation**: Adds an element to the queue.
- **Delete operation**: Removes an element from the queue.
- **Display operation**: Displays all elements of the queue.
- **Queue Overflow and Underflow Handling**: Checks for conditions like attempting to insert into a full queue or delete from an empty queue.

---

## Code Overview

### **1. insert()**
The `insert()` function adds an element to the queue:
- If the queue is full (i.e., `rear == MAX - 1`), it prints a **Queue Overflow** message.
- Otherwise, it adds the element at the rear of the queue.

### **2. del()**
The `del()` function removes an element from the queue:
- If the queue is empty (i.e., `front == -1` or `front > rear`), it prints a **Queue Underflow** message.
- Otherwise, it removes the element from the front of the queue and increments the `front` pointer.

### **3. display()**
The `display()` function prints all elements of the queue:
- If the queue is empty (i.e., `front == -1`), it prints a **Queue is empty** message.
- Otherwise, it prints all the elements in the queue from `front` to `rear`.

---

# Queue Operation Using Linked List in C

## Description
This C program demonstrates a queue implementation using a **linked list**. Unlike the array implementation, the linked list allows dynamic memory allocation, making it more flexible with the size of the queue. The program supports the following queue operations:
- **Insert**: Adds an element at the rear of the queue.
- **Delete**: Removes an element from the front of the queue.
- **Display**: Displays all elements in the queue.

This implementation uses a singly linked list where each node contains a `val` (the value stored) and a pointer (`next`) to the next node in the queue.

---

## Features
- **Insert operation**: Adds a new element at the rear of the queue.
- **Delete operation**: Removes the front element from the queue.
- **Display operation**: Displays the current elements in the queue.
- **Queue Underflow Handling**: Checks for underflow condition when attempting to delete from an empty queue.

---

## Code Overview

### **1. insert()**
The `insert()` function adds a new element at the rear of the queue. If the queue is empty (i.e., `front == NULL`), both the `front` and `rear` pointers are set to the new node. Otherwise, the new node is added at the rear and the `rear` pointer is updated.

### **2. delete()**
The `delete()` function removes the element at the front of the queue. If the queue is empty, it prints an **underflow** message. The `front` pointer is updated to point to the next node, and the previous front node is freed.

### **3. display()**
The `display()` function prints all elements in the queue from `front` to `rear`. If the queue is empty, it prints a message indicating that the queue is empty.

---

# Stack Operations Using Linked List in C

## Description
This C program demonstrates the implementation of **stack operations** using a **linked list**. The stack follows the **LIFO (Last In, First Out)** principle, where the last inserted element is the first to be removed. The program supports the following operations:
- **Push**: Inserts an element onto the stack.
- **Pop**: Removes the topmost element from the stack.
- **Display**: Displays all elements of the stack.

This implementation dynamically manages memory using linked lists, making it more flexible compared to arrays, especially when the stack size is not predetermined.

---

## Features
1. **Push operation**: Adds an element to the top of the stack.
2. **Pop operation**: Removes the top element from the stack.
3. **Display operation**: Shows all elements in the stack from top to bottom.
4. **Underflow Handling**: Prevents popping from an empty stack and displays an appropriate message.

---

## Code Overview

### **1. push()**
The `push()` function creates a new node, assigns a value to it, and inserts it at the top of the stack. If the stack is empty (`head == NULL`), the new node becomes the first element.

### **2. pop()**
The `pop()` function removes the top element of the stack. If the stack is empty, it prints an **underflow** message. The memory of the removed node is freed to prevent memory leaks.

### **3. display()**
The `display()` function traverses the linked list and prints all elements of the stack starting from the top.

---

# Singly Linked List Operations in C

## Description
This program demonstrates the implementation of basic operations on a **singly linked list** in C. A singly linked list is a dynamic data structure where each node contains:
1. A `data` field to store the value.
2. A `next` pointer that points to the next node in the sequence.

The program includes the following operations:
- **Insert at the Beginning**
- **Insert at the End**
- **Delete by Value**
- **Display the List**

---

## Features
1. **Insert at Beginning**: Adds an element to the start of the list.
2. **Insert at End**: Appends an element to the end of the list.
3. **Delete by Value**: Removes a node containing a specified value.
4. **Display**: Prints all elements in the list.

---

## Code Overview

### **1. insertatbeg()**
This function inserts a new node at the beginning of the linked list.  
- If the list is empty, the new node becomes the `head`.
- If the list has elements, the new node's `next` pointer is set to the current `head`.

### **2. insertatlast()**
This function inserts a new node at the end of the linked list.  
- If the list is empty, the new node becomes the `head`.
- Otherwise, it traverses to the last node and updates its `next` pointer to point to the new node.

### **3. delbyval()**
This function deletes the first node containing the specified value.  
- If the list is empty, it prints an "empty list" message.
- It handles cases where the node to be deleted is the only node, the `head`, or any other node.

### **4. display()**
This function traverses the linked list from the `head` and prints the `data` in each node.  
- If the list is empty, it prints an appropriate message.

---

# Linked List Traversal and Insertion at Beginning in C

## Description
This program implements two fundamental operations on a singly linked list:
1. **Traversal**: Print all the elements in the linked list.
2. **Insertion at the Beginning**: Add a new node at the start of the list.

The program dynamically allocates memory for nodes and allows the user to:
- Create a linked list interactively.
- Insert a new node at the beginning.
- Traverse and display the linked list.

---

## Features
1. **Traversal**: Traverses the linked list from the `head` and prints the data of each node.
2. **Insert at Beginning**: Adds a new node to the start of the list, making it the new `head`.

---

## Code Overview

### **1. traverse()**
This function traverses the linked list starting from the `head` and prints the `data` of each node.  
- Uses a temporary pointer to iterate through the list.
- Ends when the pointer reaches `NULL`.

### **2. insertatbeginning()**
This function inserts a new node at the start of the linked list.  
- Dynamically allocates memory for the new node.
- Updates the new node's `next` pointer to point to the current `head`.
- Updates the `head` to point to the new node.

### **3. main()**
- Allows the user to build the linked list interactively by entering values.
- Calls the `insertatbeginning()` function to add a node at the start.
- Calls the `traverse()` function to print the list.

---

