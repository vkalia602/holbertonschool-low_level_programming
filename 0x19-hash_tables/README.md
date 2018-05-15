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

### 1-djb2.c
* A hash function implementing the djb2 algorithm.
    * Prototype: ```unsigned long int hash_djb2(const unsigned char *str);```

### 2-key_index.c
* A function that gives you the index of a key.function that appends a text at the end of a file.
    * Prototype: ```unsigned long int key_index(const unsigned char *key, unsigned long int size);```
    * Returns the index at which the key/value pair should be stored in the array of the hash table

### 3-hash_table_set.c
* A  function that adds an element to the hash table.
    * Usage: ```int hash_table_set(hash_table_t *ht, const char *key, const char *value);```
    * Returns: 1 if it succeeded

### 4-hash_table_get.c
* A function that retrieves a value associated with a key.
    * Usage: ```char *hash_table_get(const hash_table_t *ht, const char *key);```
    * Returns the value associated with the element
    
### 5-hash_table_print.c
* A function that prints a hash table.
    * Usage: ```void hash_table_print(const hash_table_t *ht);```
    * Returns: 1 if it succeeded

### 6-hash_table_delete.c
* A function that deletes a hash table.
    * Usage: ```void hash_table_delete(hash_table_t *ht);```
    
---
## Author
Vasudha (Sue) Kalia 
