# 0x11. C - printf

This is a _printf() function which imitates the actual printf() function. It was authored by Ochiengmorris and Ken-wangari. The both of us are students at ALX taking the Software engineering program.

The _printf() function simply does the job of printing the formatted output and prints data.


Here is the prototype for the _printf function :
```c
int _printf("const char *format, ...");
```
Format has the string the string that is to be printed.

## Usage examples

```c
#include "main.h"

# returns 'H'
_printf("H");

# returns 'Hello'
_printf("Hello");

# returns '20'
_printf("%d", 20);
```

To use tags just like the one used above, use the following prototype :
```c
%[flag][length,if any]specifier
```


 | Format specifier | Printed output |
 | :--------------: | :------------: |
 | c                | Character      |
 | b                | Binary signed  |
 | s                | String         |
 | p                | pointer address|
 | d or i           | signed integer |
 | x                | unsigned hexadecimal|
 | X                | unsigned hexadecimal uppercase|
 | r                | Reversed string|
 | u                | unsigned integer|
 | R                | ROT13 string   |
 | S                | characters with their ASCII values|
 | o                | signed octal   |

## File functions used include :

### _printf.c
### print_char.c
### print_int.c
### pr_func.c
 contains functions.
### pr_funcev.c
### print_add.c
 print address.
### print_long_unt.c
### oct_array_fill.c
 and many more as you will see in the folders.
## AUTHORED BY :
JohnMorris (Ochiengmorris)

Ken-wangari
