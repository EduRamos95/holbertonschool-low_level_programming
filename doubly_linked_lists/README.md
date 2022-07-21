# C - Doubly linked lists
A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.

<p align="center"><img src="https://miro.medium.com/max/1230/1*5wRMqVjLatOGX88VrZgacA.jpeg"></p>

# Resources
- <a href="https://www.youtube.com/watch?v=k0pjD12bzP0" target="_blank"> What is a Doubly Linked List </a>


---
# Learning Objectives
## General
- What is a doubly linked list
- How to use doubly linked lists
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
- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

# More Info
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
---
### Description of file:
- 0-print_dlistint.c: a function that prints all the elements of a double linked list.
- 1-dlistint_len.c: a function that returns the number of elements in a double linked list.
- 2-add_dnodeint.c: a function that adds a new node at the beginning of a double linked list.
- 3-add_dnodeint_end.c: a function that adds a new node at the end of a double linked list.
- 4-free_dlistint.c: a function that frees a double linked list.
- 5-get_dnodeint.c: a function that returns the nth node of a double linked list.
- 6-sum_dlistint.c: a function that returns the sum of all the data (n) of a double linked list.
- 7-insert_dnodeint.c: a function that inserts a new node at a given position.
- 8-delete_dnodeint.c: a function that deletes the node at index index of a double linked list.

### Environment
- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc 9.4.0
- Style guideline: <a href="https://github.com/holbertonschool/Betty/wiki" target="_blank"> Betty style </a>
---
### Authors
- Edu Ramos
