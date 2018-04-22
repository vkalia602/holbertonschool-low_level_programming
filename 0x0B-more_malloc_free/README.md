# 0x0B. C - More malloc, free
---
## Description

Project 11 Low level programming series is about:
* How to use the exit function
* What are the functions calloc and realloc from the standard library and how to use them
---
## Files and Descriptions

### 0-malloc_checked.c
* Function that allocates memory using malloc.
  * Prototype: ```void *malloc_checked(unsigned int b);```
  * Returns a pointer to the allocated memory

### 1-string_nconcat.c
* A function that concatenates two strings.
    * Prototype: ```char *string_nconcat(char *s1, char *s2, unsigned int n);```
    * The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated

### 2-calloc.c
* A function that allocates memory for an array, using malloc.
    * Prototype: ```void *_calloc(unsigned int nmemb, unsigned int size);```
    * The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.

### 3-array_range.c
* A function that creates an array of integers.
    * Prototype: ```int *array_range(int min, int max);```

### 100-realloc.c
* A function that checks for alphabetic character.
    * Prototype: ```void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);```

---
## Author
Vasudha (Sue) Kalia 