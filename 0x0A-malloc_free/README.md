# 0x0A. C - malloc, free
---
## Description

Project 10 Low level programming series is about:
* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak
---
## Files and Descriptions

### 0-create_array.c
* Function that creates an array of chars, and initializes it with a specific char.
  * Prototype: ```char *create_array(unsigned int size, char c);```
  * Returns a pointer to the array, or NULL if it fails

### 1-strdup.c
* A function returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
    * Prototype: ```char *_strdup(char *str);```

### 2-str_concat.c
* A function that concatenates two strings.
    * Prototype: ```char *str_concat(char *s1, char *s2);```

### 3-alloc_grid.c
* A function that returns a pointer to a 2 dimensional array of integers.
    * Prototype: ```int **alloc_grid(int width, int height);```

### 4-free_grid.c
* A function that frees a 2 dimensional grid previously created by your alloc_grid function.
    * Prototype: ```void free_grid(int **grid, int height);```

### 5-argstostr.c
* A function that concatenates all the arguments of your program.
    * Prototype: ```char *argstostr(int ac, char **av);```
    * Returns a pointer to a new string, or NULL if it fails

---
## Author
Vasudha (Sue) Kalia 