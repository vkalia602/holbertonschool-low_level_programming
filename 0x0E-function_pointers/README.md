# 0x0E. C - Function pointers
---
## Description

Project 13 Low level programming series is about:
* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

---
## Files and Descriptions

### 0-print_name.c
* A function that prints a name.
  * Prototype: void print_name(char *name, void (*f)(char *));

### 1-array_iterator.c
* A function that executes a function given as a parameter on each element of an array.
    * Prototype: ```void array_iterator(int *array, size_t size, void (*action)(int));```

### 2-int_index.c
* A function that searches for an integer.
    * Prototype: ```int int_index(int *array, int size, int (*cmp)(int));```
    * where size is the number of elements in the array array

### 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
* Program that performs simple operations.
  * Usage:``` calc num1 operator num2```
  * The program prints the result of the operation, followed by a new line
  * Operator is one of the following:
    * +: addition
    * -: subtraction
    * *: multiplication
    * /: division
    * %: modulo

---
## Author
Vasudha (Sue) Kalia 