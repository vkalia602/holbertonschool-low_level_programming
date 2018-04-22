# 0x0D. C - Structures, typedef
---
## Description

Project 13  Low level programming series is about:
* What are structures, when, why and how to use them
* How to use typedef
---
## Files and Descriptions

### dog.h
* Define a new type struct dog with the following elements:
  * name, type = char *
  * age, type = float
  * owner, type = char *

### 1-init_dog.c
* A function that initialize a variable of type struct dog
    * Prototype: ```void init_dog(struct dog *d, char *name, float age, char *owner);```

### 2-print_dog.c
* A function that prints a struct dog
    * Prototype: ```void print_dog(struct dog *d);```
    * If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))

### dog.h
* Define a new type dog_t as a new name for the type struct dog.

### 4-new_dog.c
* A function that creates a new dog.
    * Prototype: ```dog_t *new_dog(char *name, float age, char *owner);```

### 5-free_dog.c
* A function that frees dogs.
    * Prototype: ```void free_dog(dog_t *d);```

---
## Author
Vasudha (Sue) Kalia 