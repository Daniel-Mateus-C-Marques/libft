# Libft

## 📖 Description
The **libft** is a C library that recreates several functions from the standard C library (libc) and implements additional utility functions.
The main goal is to understand how these functions work internally and to reinforce fundamental concepts such as string manipulation, memory management, and linked lists.

---

## ⚙️ Features

Are included in the library:

### Characters
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

### Strings
- ft_strlen
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strlcpy
- ft_strlcat
- ft_strnstr
- ft_strdup

### Memory
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

### Conversions
- ft_atoi

### Output
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Additional functions
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri

### Linked list
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

---

## 🛠️ Compilation

Library compilation:

```bash
make
```

Limpar arquivos objeto:

```bash
make clean
```
Limpar arqivos objeto e libft.a:

```bash
make fclean
```
Recompilar tudo:

```bash
make re
```