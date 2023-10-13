# Pratical-exercises-algorithm
This repository contains C programming exercises and their solutions. It demonstrates the following concepts:

1. Generating random integers and filling an array with them.
2. Sorting an array using the selection sort algorithm.

## Table of Contents

 - [Project Structure](#project-structure)
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

## Project Structure :

- **main.h:**
  - **Purpose:** This is a header file that contains function prototypes for functions used in the project. It allows other source files to access these functions without having to define them again.

- **fillArray.c:**
  - **Purpose:** This source file contains the implementation of the `remplirTableauAvecEntiersAliqoire` function, which generates random integers and fills an array with them.

- **selectionSort.c:**
  - **Purpose:** This source file contains the implementation of the `TriParSelection` function, which is responsible for sorting an integer array using the selection sort algorithm.

- **main.c:**
  - **Purpose:** This is the main program file that acts as the entry point of your program. It includes user interface logic and coordinates the use of the functions defined in the other source files.

 
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

- **Purpose:** The `fillArray.c` source file contains the implementation of the `remplirTableauAvecEntiersAliqoire` function, which generates random integers and fills an array with them.

- **Contents:** The file includes the implementation of the `remplirTableauAvecEntiersAliqoire` function, which uses the `rand()` function and the `time(NULL)` function to generate random integers and fill an array with them.

### Usage

- Compile the code using a C compiler, and run the executable or you can use `terminal` to compile and run the files.
  
**Compile file** :
```bash
gcc -o main main.c fillArray.c selectionSort.c -lm
```
**Run file** :
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
