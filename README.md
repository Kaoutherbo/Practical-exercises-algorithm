# Pratical-exercises-algorithm
This project contains C programming exercises and their solutions. It demonstrates the following concepts:

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
[fillArray.c file ]([https://github.com/Kaoutherbo/Pratical-exercises-algorithm/fillArray.c](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/fillArray.c)
#### Code Explanation

- `main.h`: Header file containing function prototypes.
- `fillArray.c`: Implementation of the `remplirTableauAvecEntiersAliqoire` function.
- `main.c`: The main program that asks the user for the array size, allocates memory, fills the array with random integers, and displays the sorted array.

### Usage

Compile the code using a C compiler, and run the executable. The program will prompt you to enter the size of the array and then display the sorted array.

## Exercise 2: Selection Sort

### Problem Statement
Implement the selection sort algorithm to sort an integer array in ascending order.

- Function Prototype: `void TriParSelection(int tab[], int taille)`.

### Solution

#### Code Explanation

- `main.h`: Header file containing function prototypes.
- `selectionSort.c`: Implementation of the selection sort algorithm.

### Usage

The selection sort function can be used to sort an integer array in ascending order.

## Project Structure

- `main.h`: Header file containing function prototypes.
- `fillArray.c`: Implementation of the random array generation function.
- `selectionSort.c`: Implementation of the selection sort function.
- `main.c`: The main program that includes the user interface and calls the functions.
