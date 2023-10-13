# Pratical-exercises-algorithm
This repository contains C programming exercises and their solutions. It demonstrates the following concepts:

1. Generating random integers and filling an array with them.
2. Sorting an array using the selection sort algorithm.

## Table of Contents

 - [Exercise 1: Random Array Generation](#exercise-1-random-array-generation)
    - [Problem Statement](#problem-statement)
    - [Solution](#solution)
      - [Code Explanation](#code-explanation)
    - [Usage](#usage)
  - [Exercise 2: Selection Sort](#exercise-2-selection-sort)
    - [Problem Statement](#problem-statement-1)
    - [Solution](#solution-1)
      - [Code Explanation](#code-explanation-1)
    - [Usage](#usage-1)
  - [Project Structure](#project-structure)

## Exercise 1: Random Array Generation

### Problem Statement
Write a C function that generates random integers and fills an array with them.

- Function Prototype: `void remplirTableauAvecEntiersAliqoire(int tab[], int taille, int ValeurMax)`.
- Preconditions: `tab` is an array that can contain `taille` integers.
- Postconditions: `tab` is filled with random integers between 0 (inclusive) and `ValeurMax` (excluding).

### Solution
- `fillArray.c` : [fillArray.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/fillArray.c)
- `main.c`: [main.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/main.c)
- `main.h`: [main.h file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/main.h)
#### Code Explanation

- `main.h`: Header file containing function prototypes.
- `fillArray.c`:
#### Purpose:
This source file contains the implementation of the `remplirTableauAvecEntiersAliqoire` function, which generates random integers and fills an array with them.
#### Contents: 
The file includes the implementation of the `remplirTableauAvecEntiersAliqoire` function. It uses the `rand()` function and the `time(NULL)` function to generate random integers and fill an array with them.

- `main.c`: The main program that asks the user for the array size, allocates memory, fills the array with random integers, and displays the sorted array.

### Usage

- Compile the code using a C compiler, and run the executable or you can use terminal to compile and run the files
##### Compile file :

```bash
gcc -o main main.c fillArray.c selectionSort.c -lm
```
#####  Run file :
```bash
./main
```
- The program will prompt you to enter the size of the array and then display the sorted array.

## Exercise 2: Selection Sort

### Problem Statement
Implement the selection sort algorithm to sort an integer array in ascending order.

- Function Prototype: `void TriParSelection(int tab[], int taille)`.

### Solution

- `selectionSort.c` : [selectionSort.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/selectionSort.c)
- `main.c`: [main.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/main.c)
- `main.h`: [main.h file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/main.h)
  
#### Code Explanation

- **Purpose:** The `selectionSort.c` source file contains the implementation of the `TriParSelection` function, which sorts an integer array in ascending order using the selection sort algorithm.

- **Contents:** The `TriParSelection` function iterates through the array to find the minimum element and swaps it with the element in the current position, gradually building a sorted array.

### Usage

The selection sort function can be used to sort an integer array in ascending order.

## Project Structure

- `main.h`: Header file containing function prototypes.
- `fillArray.c`: Implementation of the random array generation function.
- `selectionSort.c`: Implementation of the selection sort function.
- `main.c`: The main program that includes the user interface and calls the functions.
