# Practical exercises algorithm

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
- [Exercise 2: Insertion Sort](#exercise-2-selection-sort)
    - [Problem Statement](#problem-statement-1)
    - [Solution](#solution-1)
      - [Code Explanation](#code-explanation-1)
    - [Usage](#usage-2)

## Project Structure :

- **main.h:**
  - **Purpose:** This is a header file that contains function prototypes for functions used in the project. It allows other source files to access these functions without having to define them again.

- **fillArray.c:**
  - **Purpose:** This source file contains the implementation of the `remplirTableauAvecEntiersAliqoire` function, which generates random integers and fills an array with them.

- **selectionSort.c:**
  - **Purpose:** This source file contains the implementation of the `TriParSelection` function, which is responsible for sorting an integer array using the selection sort algorithm.

- **getSize.c:**
  - **Purpose:** This source file is for get the size of the array .
    
- **displayArray.c:**
  - **Purpose:** This source file is for display the element of the array.
    
- **main.c:**
  - **Purpose:** This is the main program file that acts as the entry point of your program. It includes user interface logic and coordinates the use of the functions defined in the other source files.

 
## Exercise 1: Random Array Generation

### Problem Statement

Write a C function that generates random integers and fills an array with them.

- Function Prototype: `void remplirTableauAvecEntiersAliqoire(int tab[], int taille, int ValeurMax)`.
- Preconditions: `arr` is an array that can contain `size` integers.
- Postconditions: `arr` is filled with random integers between 0 (inclusive) and `maxValue` (excluding).
- Use the function `rand()` from: `stdlib.h` The expression `(int)(rand() / ((double)RAND_MAX + 1) * maxValue)` is used to generate a random integer within the range
  [0, maxValue] by scaling the output of the `rand()` function.

### Solution
- `fillArray.c` : [fillArray.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/fillArray.c)
- `getSize.c` : [getSize.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/getSize.c)
- `displayArray.c` : [displayArray.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/displayArray.c)
- `main.c`: [main.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/main.c)
- `main.h`: [main.h file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/main.h)
#### Code Explanation

- **Purpose:** The `fillArray.c` source file contains the implementation of the `remplirTableauAvecEntiersAliqoire` function, which generates random integers and populates an array with these values. It ensures that the generated numbers fall within a specific range defined by the ValeurMax parameter.
  
- **Contents:** The file includes the implementation of the `remplirTableauAvecEntiersAliqoire` function.
  - Let's break down the components of this function:
    - `rand()`: This function generates random integers between 0 and a predefined maximum value `RAND_MAX`.
    - `(double)RAND_MAX + 1`: This converts the maximum value `RAND_MAX` to a double and adds 1. The addition of 1 ensures that when you divide `rand()` by this value, you obtain a floating point number between 0.0 (inclusive) and 1.0 (exclusive).
    - `rand() / ((double)RAND_MAX + 1)`: This part of the expression generates a random floating point number between 0.0 (inclusive) and 1.0 (exclusive). This number serves as a scaling factor for generating values within the desired range.
    - `Multiplying by maxValue`: The random floating-point number from the previous step is then scaled to the desired range. 
    - `(int)`: Finally, the result is cast to an integer. This conversion removes the decimal part of the floating point number, giving you a random integer within the specified range, in this case [0, maxValue).

### Usage

- Compile the code using a C compiler, and run the executable or you can use `terminal` to compile and run the files.
  
**Compile file** :
```bash
gcc -o main main.c fillArray.c selectionSort.c displayArray.c getSize.c -lm
```
**Run file** :
```bash
./main
```
- The program will prompt you to enter the size of the array and then display the sorted array.

## Exercise 2: Selection Sort

### Problem Statement

Implement the selection sort algorithm to sort an integer array in ascending order.

- Function Prototype: `void TriParSelection(int maxValue[], int size)`.

### Solution

- `selectionSort.c` : [selectionSort.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/selectionSort.c)
- `displayArray.c` : [displayArray.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/displayArray.c)
- `main.c`: [main.c file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/main.c)
- `main.h`: [main.h file](https://github.com/Kaoutherbo/Pratical-exercises-algorithm/blob/main/main.h)
  
#### Code Explanation

- **Purpose:** The `selectionSort.c` source file contains the implementation of the `TriParSelection` function, which sorts an integer array in ascending order using the selection sort algorithm.

- **Contents:** The `TriParSelection` function iterates through the array to find the minimum element and swaps it with the element in the current position, gradually building a sorted array.

### Usage

The selection sort function can be used to sort an integer array in ascending order.
