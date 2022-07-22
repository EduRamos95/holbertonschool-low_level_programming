# C - File I/O
This chapter cover how C programmers can create, open, close text or binary files for their data storage.

A file represents a sequence of bytes, regardless of it being a text file or a binary file. C programming language provides access on high level functions as well as low level (OS level) calls to handle file on your storage devices. This chapter will take you through the important calls for file management.
- Opening Files
- Closing a File
- Writing a File
- Reading a File


<p align="center"><img src="https://miro.medium.com/max/800/1*tyVes__Jqm1pUeEMihEorw.png"></p>

# Resources
- <a href="https://en.wikipedia.org/wiki/File_descriptor" target="_blank"> File descriptor </a>
- <a href="https://www.youtube.com/watch?v=dP3N8g7h8gY" target="_blank"> C Programming in Linux Tutorial #024 - open() read() write() Functions </a>

---
# Learning Objectives
## General
- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their `POSIX` names
- How to use the I/O system calls `open`, `close`, `read` and `write`
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- What are file permissions, and how to set them when creating a file with the `open` system call
- What is a system call
- What is the difference between a function and a system call
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
- Allowed syscalls: `read`, `write`, `open`, `close`
- You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" target="_blank"> _putchar </a>
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Tip: always prefer using symbolic constants (`POSIX`) vs numbers when it makes sense. For instance `read(STDIN_FILENO, ...` vs `read(0, ...
`

---
### Description of file:
- 0-read_textfile.c: a function that reads a text file and prints it to the `POSIX` standard output.
- 1-create_file.c: a function that creates a file.
- 2-append_text_to_file.c: a function that appends text at the end of a file.
- 3-cp.c: a program that copies the content of a file to another file.
- 100-elf_header.c: a program that displays the information contained in the `ELF` header at the start of an `ELF` file.


### Environment
- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc 9.4.0
- Style guideline: <a href="https://github.com/holbertonschool/Betty/wiki" target="_blank"> Betty style </a>
---
### Authors
- Edu Ramos
