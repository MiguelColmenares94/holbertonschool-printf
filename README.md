# _prinft

The _printf function is a custom implementation of the C programming function printf. It returns the number of characters printed and writes the output to stdout.

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
A graphical view of what the "_printf " function does.

![enter image description here](https://microchipdeveloper.com/local--files/tls2101:printf/printf2.png)

## Patterns

![enter image description here](https://i.stack.imgur.com/BX0ZZ.png)

That image shows specifiers that we can use in the printf.  In this case, _printf just allow specifiers like
|Specifiers|Functions|Description|
|--|--|--|
|s|print_string|print a string|
|c|print_char|print just a char|
|i|print_integer|print a number in base 10|
|d|print_integer|print a number in base 10|

## Description of the main files

a) main.h : It is the one that keeps all the prototypes and the structure of the functions. Additionally, standard library header files can be included. This in order to be used by our created functions.

b) _printf : It is a function that can receive parameters that people assign to it.

c) controller : Verifies that a format handler exists within the format(%).

d) selector : Provides the format specifiers for the character string.

## Files in this repository

a) main.h

b)_printf.c

c) controler.c

d) selector.c

e) itos.c

f) pc.c

g) pi.c

h) pstr.c

i) spf.c

j) man_3_printf

## Contributing

This project was created by:

- Miguel Colmenares
- Alex Nuñez

For the C - printf evaluation of Holberton School Peru
