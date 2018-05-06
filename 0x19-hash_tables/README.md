# 0x19. C - Hash tables
---
## Description

Project 19 Low level programming series is about:
* What is a hash function
What makes a good hash function
What is a hash table, how do they work and how to use them
What is a collision and what are the main ways of dealing with collisions in the context of a hash table
What are the advantages and drawbacks of using hash tables
What are the most common use cases of hash tables

---
## Files and Descriptions

### 0-hash_table_create.c
* A function that reads a text file and prints it to the POSIX standard output.
  * Prototype: ssize_t read_textfile(const char *filename, size_t letters);

### 1-create_file.c
* A function that creates a file.
    * Prototype: ```int create_file(const char *filename, char *text_content);```
    * Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)

### 2-append_text_to_file.c
* A function that appends a text at the end of a file.
    * Prototype: ```int append_text_to_file(const char *filename, char *text_content);```

### 3-cp.c
* A program that copies the content of a file to another file.
    * Usage: ```cp file_from file_to```
    * You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer

---
## Author
Vasudha (Sue) Kalia 
