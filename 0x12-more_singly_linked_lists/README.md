# 0x12. C - More singly linked lists
---
## Description

Project 17 Low level programming series is about:
* Extension to project 16
* More Singly linked lists
---
## Files and Descriptions

### 0-print_listint.c
* Function that prints all the elements of a listint_t list.
  * Prototype: ```size_t print_listint(const listint_t *h);```
  * Return: the number of nodes

### 1-listint_len.c
* A function that returns the number of elements in a linked listint_t list.
    * Prototype: ```size_t listint_len(const listint_t *h);```

### 2-add_nodeint.c
* A function that  adds a new node at the beginning of a listint_t list.
    * Prototype: ```listint_t *add_nodeint(listint_t **head, const int n);```

### 3-add_nodeint_end.c
* A function that adds a new node at the end of a listint_t list.
    * Prototype: ```listint_t *add_nodeint_end(listint_t **head, const int n);```

### 4-free_listint.c
* A function that frees a listint_t list.
    * Prototype: ```void free_listint(listint_t *head);```

### 5-free_listint2.c
* A function that frees a listint_t list.
    * Prototype: ```void free_listint2(listint_t **head);```

### 6-pop_listint.c
* A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
    * Prototype: ```int pop_listint(listint_t **head);```

### 7-get_nodeint.c
* A function that returns the nth node of a listint_t linked list.
    * Prototype: ```listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);```

### 8-sum_listint.c
* A function that returns the sum of all the data (n) of a listint_t linked list.
    * Prototype: ```int sum_listint(listint_t *head);```

### 9-insert_nodeint.c
* A function that inserts a new node at a given position.
    * Prototype: ```listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);```

### 10-delete_nodeint.c
* A function that adds deletes the node at index index of a listint_t linked list.
    * Prototype: ```int delete_nodeint_at_index(listint_t **head, unsigned int index);```
    * where index is the index of the node that should be deleted. Index starts at 0

---
## Author
Vasudha (Sue) Kalia 