# ft_printf

## Overview

`ft_printf` is a custom implementation of the standard C function `printf`. This program mimics the behavior and functionality of `printf`, focusing specifically on conversion and printing behaviors for a subset of format specifiers. It supports the following flags: `c`, `p`, `d`, `i`, `u`, `x`, `X`, and `%`.

## Features

- **Character (`%c`)**: Print a single character.
- **Pointer (`%p`)**: Print a pointer address.
- **Decimal (`%d` & `%i`)**: Print a signed integer.
- **Unsigned Integer (`%u`)**: Print an unsigned integer.
- **Hexadecimal (`%x` & `%X`)**: Print an unsigned integer in hexadecimal format, with lowercase (`%x`) or uppercase (`%X`) letters.
- **Percent (`%%`)**: Print a percent sign.

## Compilation

The project is compiled into a library `libftprintf.a` using the provided `Makefile`. The library can then be linked against other programs to utilize the `ft_printf` functionality.

### Makefile Targets

- **all**: Compiles the source files and creates the `libftprintf.a` library.
- **clean**: Removes object files generated during compilation.
- **fclean**: Removes both object files and the library file.
- **re**: Rebuilds the library from scratch by executing `fclean` followed by `all`.

## Usage

To use `ft_printf` in your own project, include its headers and link against the compiled library. Here's an example:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    return 0;
}
```

## To compile a program using ft_printf

`gcc -L. -lftprintf your_program.c -o your_program`

Ensure that libftprintf.a is in the same directory, or adjust the -L option to point to its location.
