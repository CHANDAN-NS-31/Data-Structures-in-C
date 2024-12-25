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
