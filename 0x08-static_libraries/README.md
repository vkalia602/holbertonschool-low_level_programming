# 0x08. C - Static libraries
---
## Description

Project 9 Low level programming series is about:
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm

---
## Files and Descriptions

### Task 1 - libholberton.a, holberton.h
* Create the static library libholberton.a containing all the functions listed below:
  * int _putchar(char c);
  * int _islower(int c);
  * int _isalpha(int c);
  * int _abs(int n);
  * int _isupper(int c);
  * int _isdigit(int c);
  * int _strlen(char *s);
  * void _puts(char *s);
  * char *_strcpy(char *dest, char *src);
  * int _atoi(char *s);
  * char *_strcat(char *dest, char *src);
  * char *_strncat(char *dest, char *src, int n);
  * char *_strncpy(char *dest, char *src, int n);
  * int _strcmp(char *s1, char *s2);
  * char *_memset(char *s, char b, unsigned int n);
  * char *_memcpy(char *dest, char *src, unsigned int n);
  * char *_strchr(char *s, char c);
  * unsigned int _strspn(char *s, char *accept);
  * char *_strpbrk(char *s, char *accept);
  * char *_strstr(char *haystack, char *needle);

### Task 2 - Create_static_lib.sh
* Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

---
## Author
Vasudha (Sue) Kalia 
