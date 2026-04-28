# Libft

## 📖 Descrição
A **libft** é uma biblioteca em C que recria várias funções da biblioteca padrão do C (`libc`) e implementa funções utilitárias adicionais.  
O objetivo principal é aprender como essas funções funcionam internamente e reforçar conceitos fundamentais como manipulação de strings, memória e listas ligadas.

---

## ⚙️ Funcionalidades

A biblioteca inclui funções para:

### Caracteres
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

### Memória
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

### Conversões
- ft_atoi

### Output
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Funções adicionais
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri

### Listas ligadas
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

## 🛠️ Compilação

Compilar a biblioteca:

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