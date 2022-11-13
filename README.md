# _printf

_printf is a program that simulates some of the basic functionalities of the real printf from the standard stdio library. 

## Installation

First clone this repository 

```bash
git clone https://github.com/MiguelColmenares94/holbertonschool-printf
```
after cloning the repository locate inside the repository folder and use "gcc" compiler.

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c *.h -o _printf
```

## Usage
```bash 
_printf("%d line of text to print %s and %c formated character\n", 1, followed by a formated string, a);
```

## Description of functions
```bash
a) main.h : It is the one that keeps all the prototypes and the structure of the functions. Additionally, standard library header files can be included. This in order to be used by our created functions.

b) _printf : It is a function that can receive parameters that people assign to it.

c) controller : Verifies that a format handler exists within the format(%).

d) selector : Provides the format specifiers for the character string.
```

## Contributing

This project was created by:

- Miguel Colmenares
- Alex Nuñez

For the C - printf evaluation of Holberton School Peru
