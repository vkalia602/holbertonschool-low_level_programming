# 0x16. C - Doubly linked lists
---
## Description

Project 20 Low level programming series is about:
* What is a doubly linked list
* How to use doubly linked lists
* Start to look for the right source of information without too much help

## Files and Descriptions

### 0-print_dlistint.c
* A function that prints all the elements of a dlistint_t list.
  * Prototype: ```size_t print_dlistint(const dlistint_t *h);```

### 1-dlistint_len.c
* A function that returns the number of elements in a linked dlistint_t list.
    * Prototype: ```size_t dlistint_len(const dlistint_t *h);```

### 2-add_dnodeint.c
* A function that adds a new node at the beginning of a dlistint_t list
    * Prototype: ```dlistint_t *add_dnodeint(dlistint_t **head, const int n);```

### 3-add_dnodeint_end.c
* A function that adds a new node at the end of a dlistint_t list.
    * Usage: ```dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);```
    
### 4-free_dlistint.c
* A function that free a dlistint_t list.
    * Usage: ```void free_dlistint(dlistint_t *head);```
    
### 5-get_dnodeint.c
* A function  that returns the nth node of a dlistint_t linked list.
    * Usage: ```dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)```
    
### 6-sum_dlistint.c
* A function that returns the sum of all the data (n) of a dlistint_t linked list
    * Usage: ```int sum_dlistint(dlistint_t *head);```
    
### 7-insert_dnodeint.c
* A function that inserts a new node at a given position.
    * Usage: ```dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);```
    
### 8-delete_dnodeint.c
* A function that deletes the node at index index of a dlistint_t linked list.
    * Usage: ```int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);```
    
---
## Author
Vasudha (Sue) Kalia 
