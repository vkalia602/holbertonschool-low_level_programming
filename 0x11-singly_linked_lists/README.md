# 0x11. C - Singly linked lists
---
## Description

Project 15 Low level programming series is about:
* When and why using linked lists vs arrays
* How to build and use linked lists
---
## Files and Descriptions

The following struct was used for the singly linked list:
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
### 0-print_list.c
* A function that prints all the elements of a list_t list.
  * Prototype: ```size_t print_list(const list_t *h);```
  * Return: the number of nodes

### 1-list_len.c
* A Function that returns the number of elements in a linked list_t list.
    * Prototype: ```size_t list_len(const list_t *h);```

### 2-add_node.c
* A function that adds a new node at the beginning of a list_t list.
    * Prototype: ```list_t *add_node(list_t **head, const char *str);```

### 3-add_node_end.c
* A function that adds a new node at the end of a list_t list.
    * Prototype: ```list_t *add_node_end(list_t **head, const char *str);```
    * Return: the address of the new element, or NULL if it failed

### 4-free_list.c
* A function that frees a list_t list.
    * Prototype: ```void free_list(list_t *head);```

### 100-first.c
* A function that prints ```You're beat! and yet, you must allow,\nI bore my house upon my back!\n``` before the main function is executed.

---
## Author
Vasudha (Sue) Kalia 