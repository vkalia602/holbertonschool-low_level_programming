# 0x06. C - Even more pointers, arrays and strings
---
## Description

Project 7 Low level programming series is about:
* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

---
## Files and Descriptions

### 0-memset.c
* Function that fills memory with a constant byte.
  * Prototype: ```char *_memset(char *s, char b, unsigned int n)```

### 1-memcpy.c
* Function that copies memory area.
  * Prototype: ```char *_memcpy(char *dest, char *src, unsigned int n);```
  * The _memcpy() function copies n bytes from memory area src to memory area dest

### 2-strchr.c
* Function that locates a character in a string.
    * Prototype: ```char *_strchr(char *s, char c)```

### 3-strspn.c
* A function that gets the length of a prefix substring.
    * Prototype: ```unsigned int _strspn(char *s, char *accept)```

### 4-strpbrk.c
* Function that searches a string for any of a set of bytes
  * Prototype: ```char *_strpbrk(char *s, char *accept);```

### 5-strstr.c
* Function that locates a substring.
  * Prototype: ```char *_strstr(char *haystack, char *needle)```
  * _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared

### 7-print_chessboard.c
* A function that prints the chessboard.
    * Prototype: ```void print_chessboard(char (*a)[8])```

### 8-print_diagsums.c
* A function that prints the sum of the two diagonals of a square matrix of integers.
    * Prototype: ```void print_diagsums(int *a, int size);```

### 9-set_string.c
* A function that sets the value of a pointer to a char.
    * Prototype: ```void set_string(char **s, char *to)```

### 101-crackme_password
* A file that contains the password for the crackme2 executable.

---
## Author
Vasudha (Sue) Kalia 
