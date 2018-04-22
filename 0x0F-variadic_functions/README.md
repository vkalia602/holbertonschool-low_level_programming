# 0x0F. C - Variadic functions
---
## Description

Project 14 Low level programming series is about:
* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier
---
## Files and Descriptions

### 0-sum_them_all.c
* Function that returns the sum of all its parameters.
  * Prototype: ```int sum_them_all(const unsigned int n, ...);```

### 1-print_numbers.c
* A function that prints numbers, followed by a new line.
    * Prototype: ```void print_numbers(const char *separator, const unsigned int n, ...);```

### 2-print_strings.c
* A function that prints strings, followed by a new line
    * Prototype: ```void print_strings(const char *separator, const unsigned int n, ...);```

### 3-print_all.c
* A function that prints anything.
    * Prototype: ```void print_all(const char * const format, ...);```
    * where format is a list of types of arguments passed to the function
      * c: char
      * i: integer
      * f: float
      * s: char * (if the string is NULL, print (nil) instead
      * any other char should be ignored

---
## Author
Vasudha (Sue) Kalia 