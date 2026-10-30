*This project has been created as part of the 42 curriculum by mabda.*

## Description

The `libft` project is the first project in the 42 curriculum. Its goal is to create a custom C library containing a collection of general-purpose functions that will be used throughout subsequent projects. Since standard C library functions (like `printf`, `strlen`, etc.) are generally forbidden in 42 projects, students must rewrite them from scratch to understand their underlying mechanics and to build a robust toolset for future use.

### The Library

This project builds a static library named `libft.a`. The library includes implementations of standard C library functions alongside utility functions and linked list operations.

## Instructions

### Compilation

The project includes a `Makefile` to compile the library.

*   To compile the standard library functions:

    ```bash
    make
    ```

    This will create the `libft.a` archive in the root directory.


*   To remove the compiled object files (`.o` files):

    ```bash
    make clean
    ```

*   To remove the object files and the `libft.a` archive:

    ```bash
    make fclean
    ```

*   To force a complete recompilation (runs `fclean` then `make`):

    ```bash
    make re
    ```

### Usage

To use this library in your own C projects:

1.  Include the header file in your C source files:

    ```c
    #include "libft.h"
    ```

2.  Compile your program, linking it against the `libft.a` library. You will need to specify the path to the library and the header. Assuming `libft.a` and `libft.h` are in the same directory as your source file `main.c`:

    ```bash
    cc main.c -L. -lft -o my_program
    ```

---
#### Here is a detailed description of the functions included in this library, organized by their functionality:

#### Character Classification and Conversion
*   **`ft_isalpha`**: Checks for an alphabetic character.
*   **`ft_isdigit`**: Checks for a digit (0 through 9).
*   **`ft_isalnum`**: Checks for an alphanumeric character.
*   **`ft_isascii`**: Checks whether a character falls into the ASCII character set.
*   **`ft_isprint`**: Checks for any printable character including space.
*   **`ft_toupper`**: Converts a lowercase letter to uppercase.
*   **`ft_tolower`**: Converts an uppercase letter to lowercase.

#### String Manipulation
*   **`ft_strlen`**: Calculates the length of a string.
*   **`ft_strlcpy`**: Size-bounded string copying.
*   **`ft_strlcat`**: Size-bounded string concatenation.
*   **`ft_strchr`**: Locates the first occurrence of a character in a string.
*   **`ft_strrchr`**: Locates the last occurrence of a character in a string.
*   **`ft_strncmp`**: Compares two strings up to a specified number of characters.
*   **`ft_strnstr`**: Locates a substring in a string, searching at most a specified number of characters.
*   **`ft_strdup`**: Duplicates a string by allocating sufficient memory for a copy.
*   **`ft_substr`**: Extracts a substring from a string.
*   **`ft_strjoin`**: Concatenates two strings into a newly allocated string.
*   **`ft_strtrim`**: Removes specified characters from the beginning and end of a string.
*   **`ft_split`**: Splits a string into an array of strings based on a delimiter character.
*   **`ft_strmapi`**: Applies a given function to each character of a string to create a new string.
*   **`ft_striteri`**: Applies a given function to each character of a string, passing its index.

#### Memory Manipulation
*   **`ft_memset`**: Fills a block of memory with a specific byte.
*   **`ft_bzero`**: Erases the data in a block of memory by writing zeros.
*   **`ft_memcpy`**: Copies memory area from source to destination.
*   **`ft_memmove`**: Copies memory area, handling overlapping blocks correctly.
*   **`ft_memchr`**: Scans a block of memory for a specific character.
*   **`ft_memcmp`**: Compares two memory areas.
*   **`ft_calloc`**: Allocates memory for an array and initializes it to zero.

#### Conversion 
*   **`ft_atoi`**: Converts a string to an integer.
*   **`ft_itoa`**: Converts an integer to a string (newly allocated).

#### File Descriptor Operations
*   **`ft_putchar_fd`**: Outputs a character to the specified file descriptor.
*   **`ft_putstr_fd`**: Outputs a string to the specified file descriptor.
*   **`ft_putendl_fd`**: Outputs a string followed by a newline to the specified file descriptor.
*   **`ft_putnbr_fd`**: Outputs an integer to the specified file descriptor.

#### Linked List Operations
*   **`ft_lstnew`**: Allocates and returns a new list node.
*   **`ft_lstadd_front`**: Adds a new node at the beginning of the list.
*   **`ft_lstsize`**: Counts the number of nodes in a list.
*   **`ft_lstlast`**: Returns the last node of the list.
*   **`ft_lstadd_back`**: Adds a new node at the end of the list.
*   **`ft_lstdelone`**: Frees the memory of a node's content and the node itself.
*   **`ft_lstclear`**: Deletes and frees the given node and every successor of that node.
*   **`ft_lstiter`**: Iterates the list and applies a function to the content of each node.
*   **`ft_lstmap`**: Iterates the list and applies a function to the content of each node, creating a new list resulting from the successive applications of the function.


## Resources

*   Man pages (e.g., `man strlen`, `man malloc`)
*   [w3schools Guide to C Programming](https://www.w3schools.com/c/index.php)
*	[geeksforgeeks Guide to C Programming](https://www.geeksforgeeks.org/)
*   **AI Usage:** AI was utilized strictly as a learning tool to understand complex concepts, evaluate code against best practices, and draft this `README.md`. No AI generated code was used in the implementation of the library.