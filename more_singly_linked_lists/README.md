# C - More singly linked lists
Like arrays, Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers. They includes a series of connected nodes. Here, each node stores the data and the address of the next node.

<p align="center"><img src="https://cdn.programiz.com/sites/tutorial2program/files/linked-list-concept.png"></p>

# Resources
- <a href="https://www.youtube.com/watch?v=udapt4FGY20&t=130s" target="_blank"> Linked Lists </a>


---
# Learning Objectives
## General
- How to use linked lists
- Start to look for the right source of information without too much help

# Requirements
## General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank"> betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a>
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a>
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

# More Info
```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
---
### Description of file:
- 0-print_listint: a function that prints all elements of a linked list.
- 1-listint_len: a function that returns the number of elements in a linked list.
- 2-add_nodeint: a function that adds a new node at the beginning of a linked list.
- 3-add_nodeint_end: a function that adds a new node at the end of a list.
- 4-free_listint: a function that free a linked list.
- 5-free: a function that free a linked list.
- 6-pop_listint: deletes the head node
- 7-get_nodeint: a function that returns the nth node of a linked list.
- 8-sum_listint: a function that returns the sum of all the data (n) of a linked list.
- 9-insert_nodeint: a function that inserts a new node at a given position.
- 10-delete_nodeint: a function that deletes the node at index of a linked lits.

### Environment
- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc 9.4.0
- Style guideline: <a href="https://github.com/holbertonschool/Betty/wiki" target="_blank"> Betty style </a>
---
### Authors
- Edu Ramos
