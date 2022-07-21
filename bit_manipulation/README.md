# C - Bit manipulation
Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a byte. C language is very efficient in manipulating bits.

<p align="center"><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/232/bitwise.PNG"></p>

# Resources
- <a href="https://www.tutorialspoint.com/ansi_c/c_bits_manipulation.htm" target="_blank"> Bit manipulation, bitwise operators and bit fields </a>


---
# Learning Objectives
## General
- Look for the right source of information without too much help
- How to manipulate bits and use bitwise operators

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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded

# More Info
#### Examples:
```c
A = 0011 1100           |         A = 0011 1100
B = 0000 1101           |         B = 0000 1101
-----------------       |         -----------------  
A&B = 0000 1100         |         A<<1 = 0111 1000
A|B = 0011 1101         |         A<<4 = 1100 0000
A^B = 0011 0001         |         B>>1 = 0000 0110
~A  = 1100 0011         |         B>>3 = 0000 0001
```
---
### Description of file:
- 0-binary_to_uint.c: a function that converts a binary number to an `unsigned int`.
- 1-print_binary.c: a function that prints the binary representation of a number.
- 2-get_bit.c: a function that returns the value of a bit at a given index.
- 3-set_bit.c: a function that sets the value of a bit to `1` at a given index.
- 4-clear_bit.c: a function that sets the value of a bit to `0` at a given index.
- 5-flip_bits.c: a function that returns the number of bits you would need to flip to get from one number to another.
#### Advance:
- 100-get_endianness.c: a function that checks the endianness.

### Environment
- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc 9.4.0
- Style guideline: <a href="https://github.com/holbertonschool/Betty/wiki" target="_blank"> Betty style </a>
---
### Authors
- Edu Ramos
