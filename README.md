*This project has been created as part of the 42 curriculum by `beyatala`.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.

The goal of this project is to recreate commonly used functions from the standard C library and implement additional utility functions. The project focuses on basic C concepts such as pointers, memory management, strings, dynamic memory allocation, file descriptors, and linked lists.

The final result is a static library called `libft.a`.

## Instructions

Compile the library with:

```bash
make
```

The project uses the following compiler flags:

```text
-Wall -Wextra -Werror
```

Available Makefile commands:

```bash
make
make clean
make fclean
make re
```

* `make` compiles the library.
* `make clean` removes object files.
* `make fclean` removes object files and `libft.a`.
* `make re` recompiles the entire library.

To use the library in another C project:

```c
#include "libft.h"
```

## Library Content

The library contains:

* Character functions such as `ft_isalpha`, `ft_isdigit`, `ft_toupper`
* String functions such as `ft_strlen`, `ft_strlcpy`, `ft_strchr`
* Memory functions such as `ft_memset`, `ft_memcpy`, `ft_memmove`
* Additional functions such as `ft_substr`, `ft_split`, `ft_itoa`
* File descriptor functions such as `ft_putchar_fd`, `ft_putstr_fd`
* Linked list functions such as `ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`

## Resources

The following resources were used during the project:

* 42 Libft subject
* 42 Norm
* C manual pages
* C documentation
* Peer discussions and evaluations

Useful manual pages:

```bash
man strlen
man memcpy
man memmove
man calloc
```

### AI Usage

AI was used as a supporting resource for understanding C concepts, debugging errors, reviewing function implementations, and organizing the README.

All suggestions were reviewed and adapted according to the project requirements.
