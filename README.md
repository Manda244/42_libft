# Libft

*This project has been created as part of the 42 curriculum by marasolo.*

## Description

**Libft** is the first project at 42.
It requires us to recreate some standard C library functions as well,
as other utility functions that will be used throughout our curriculum.
The goal is to understand how these functions work behind the scenes, 
master memory management, and build a personal library to rely on for future projects.

## Instructions

### 1. Compiling the Library

To compile the library, run the following command in the root of the repository:

```bash
make 

```

This will generate the static library file `libft.a`.

### 2. Cleaning Up

* `make clean`: Removes the object files (`.o`).
* `make fclean`: Removes object files and the `libft.a` library.
* `make re`: Recompiles the entire library from scratch.

### 3. Usage

To use this library in your code:

1. Include the header in your C file: `#include "libft.h"`
2. Compile your project linking the library:

```bash
cc main.c -L. -lft -o my_program

```

## Documentation

### Part 1: Libc Functions

Standard C library functions.

| Function | Prototype | Description |
| --- | --- | --- |
| **ft_isalpha** | `int ft_isalpha(int c);` | Checks for an alphabetic character. |
| **ft_isdigit** | `int ft_isdigit(int c);` | Checks for a digit (0 through 9). |
| **ft_isalnum** | `int ft_isalnum(int c);` | Checks for an alphanumeric character. |
| **ft_isascii** | `int ft_isascii(int c);` | Checks if c is a 7-bit unsigned char (ASCII). |
| **ft_isprint** | `int ft_isprint(int c);` | Checks for any printable character. |
| **ft_strlen** | `size_t ft_strlen(const char *s);` | Calculates the length of a string. |
| **ft_memset** | `void *ft_memset(void *s, int c, size_t n);` | Fills the first n bytes of memory with a constant byte. |
| **ft_bzero** | `void ft_bzero(void *s, size_t n);` | Erases the data in the n bytes of the memory. |
| **ft_memcpy** | `void *ft_memcpy(void *dest, const void *src, size_t n);` | Copies n bytes from memory area src to dest. |
| **ft_memmove** | `void *ft_memmove(void *dest, const void *src, size_t n);` | Copies n bytes (safe for overlapping memory). |
| **ft_strlcpy** | `size_t ft_strlcpy(char *dst, const char *src, size_t size);` | Copies string to a specific size. |
| **ft_strlcat** | `size_t ft_strlcat(char *dst, const char *src, size_t size);` | Concatenates string to a specific size. |
| **ft_toupper** | `int ft_toupper(int c);` | Converts char to uppercase. |
| **ft_tolower** | `int ft_tolower(int c);` | Converts char to lowercase. |
| **ft_strchr** | `char *ft_strchr(const char *s, int c);` | Locates the first occurrence of char c in string. |
| **ft_strrchr** | `char *ft_strrchr(const char *s, int c);` | Locates the last occurrence of char c in string. |
| **ft_strncmp** | `int ft_strncmp(const char *s1, const char *s2, size_t n);` | Compares two strings up to n characters. |
| **ft_memchr** | `void *ft_memchr(const void *s, int c, size_t n);` | Scans memory for a character. |
| **ft_memcmp** | `int ft_memcmp(const void *s1, const void *s2, size_t n);` | Compares two memory areas. |
| **ft_strnstr** | `char *ft_strnstr(const char *big, const char *little, size_t len);` | Locates a substring in a string. |
| **ft_atoi** | `int ft_atoi(const char *nptr);` | Converts the initial portion of a string to int. |
| **ft_calloc** | `void *ft_calloc(size_t nmemb, size_t size);` | Allocates memory for an array and zeroes it. |
| **ft_strdup** | `char *ft_strdup(const char *s);` | Duplicates a string using malloc. |

### Part 2: Additional Functions

Utility functions for string manipulation and output.

| Function | Prototype | Description |
| --- | --- | --- |
| **ft_substr** | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Returns a substring from string `s`. |
| **ft_strjoin** | `char *ft_strjoin(char const *s1, char const *s2);` | Concatenates `s1` and `s2` into a new string. |
| **ft_strtrim** | `char *ft_strtrim(char const *s1, char const *set);` | Trims characters in `set` from start/end of `s1`. |
| **ft_split** | `char **ft_split(char const *s, char c);` | Splits `s` using `c` as delimiter into an array. |
| **ft_itoa** | `char *ft_itoa(int n);` | Converts integer `n` to a string. |
| **ft_strmapi** | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies function `f` to each char of `s` (returns new string). |
| **ft_striteri** | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | Applies function `f` to each char of `s` (modifies in place). |
| **ft_putchar_fd** | `void ft_putchar_fd(char c, int fd);` | Outputs a char to a file descriptor. |
| **ft_putstr_fd** | `void ft_putstr_fd(char *s, int fd);` | Outputs a string to a file descriptor. |
| **ft_putendl_fd** | `void ft_putendl_fd(char *s, int fd);` | Outputs a string + newline to a file descriptor. |
| **ft_putnbr_fd** | `void ft_putnbr_fd(int n, int fd);` | Outputs an integer to a file descriptor. |

### Linked Lists

Functions to manipulate lists using the `t_list` structure.

**The Structure:**

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

```

| Function | Prototype | Description |
| --- | --- | --- |
| **ft_lstnew** | `t_list *ft_lstnew(void *content);` | Creates a new list node. |
| **ft_lstadd_front** | `void ft_lstadd_front(t_list **lst, t_list *new);` | Adds a node to the beginning of the list. |
| **ft_lstsize** | `int ft_lstsize(t_list *lst);` | Counts the number of nodes in the list. |
| **ft_lstlast** | `t_list *ft_lstlast(t_list *lst);` | Returns the last node of the list. |
| **ft_lstadd_back** | `void ft_lstadd_back(t_list **lst, t_list *new);` | Adds a node to the end of the list. |
| **ft_lstdelone** | `void ft_lstdelone(t_list *lst, void (*del)(void *));` | Frees a single node's content. |
| **ft_lstclear** | `void ft_lstclear(t_list **lst, void (*del)(void *));` | Deletes and frees a node and all its successors. |
| **ft_lstiter** | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Iterates the list and applies `f` to content. |
| **ft_lstmap** | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Creates a new list by applying `f` to each node. |

---

## Resources & AI Usage

### Classic References

* **Man Pages:** The primary source of truth for Libc functions (`man strlen`, `man isalpha`, etc).
* **GNU Libc Manual:** For deeper understanding of standard behavior.

### AI Usage

*This section confirms the usage of AI tools during the project development.*

* **Tools:** Gemini / ChatGPT
* **Usage:**
* **Documentation:** Used AI to guide me to generate this `README.md` file, specifically to format the function tables and ensure all prototypes matched the header file.
* **Understanding:** Used AI to clarify the behavior of undefined behaviors in original libc functions (e.g., `memmove` vs `memcpy` overlap handling).
# manda
# manda
# manda
# manda
