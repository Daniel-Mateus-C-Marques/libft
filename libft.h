/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:59:08 by danicamp          #+#    #+#             */
/*   Updated: 2026/05/01 09:12:13 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>	

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**Checks if the character is alphabetic.*/
int		ft_isalpha(int c);
/**Checks if the character is a numeric digit.*/
int		ft_isdigit(int c);
/**Checks if the character is a numeric digit or alphabetic.*/
int		ft_isalnum(int c);
/**Checks if the character is on ASCII table.*/
int		ft_isascii(int c);
/**Checks if the character is printable.*/
int		ft_isprint(int c);
/**Returns the length of a string.*/
size_t	ft_strlen(const char *s);
/**Sets a block memory with a given value.*/
void	*ft_memset(void *s, int c, size_t n);
/**Sets a block of memory with to zero.*/
void	ft_bzero(void *s, size_t n);
/**Copies a block of memory from source to destination.*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/**Moves a block of memory.*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/**Copies from source to dest and returns source size.*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
/**Concatenates a source to destination.
 * Returns destination + source size if the buffer size was enough.
 * Returns a value equal or bigger than buffer size 
 * if the buffer size was not enough.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
/**Transforms a lowercase character to uppercase.*/
int		ft_toupper(int c);
/**Transforms a uppercase character to lowercase.*/
int		ft_tolower(int c);
/**Searches for the first occurrence of a given character.*/
char	*ft_strchr(const char *s, int c);
/**Searches for the last occurrence of a given character.*/
char	*ft_strrchr(const char *s, int c);
/**Compares the the difference between two given strings until a given size.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**Searches for a byte in memory until a given size.*/
void	*ft_memchr(const void *s, int c, size_t n);
/**Compares bytes from two given pointers until a given size.*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**Searches for a little string in a big string.*/
char	*ft_strnstr(const char *big, const char *little, size_t len);
/**Transforms a number in a string to integer.*/
int		ft_atoi(const char *nptr);
/**Allocates and turn zero a block of memory.
 * Returns the pointer to the alocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size);
/**Return a pointer to a duplicate of the string s.*/
char	*ft_strdup(const char *s);
/**Returns a pointer to a new string starting at 
 * given index until a given length.*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**Returns a pointer to a new string with the concatenation from s1 and s2.*/
char	*ft_strjoin(const char *s1, const char *s2);
/**Returns a pointer to a new string from s1 removing 
 * a set of characters from start and end. */
char	*ft_strtrim(const char *s1, const char *set);
/**Returns an array of strings split from s using the delimiter c.*/
char	**ft_split(char const *s, char c);
/**Transforms a given integer n in a string and returns its pointer.*/
char	*ft_itoa(int n);
/**Returns a pointer to a new string from s applying 
 * a function f on each character in the new string.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**Applies a function f on each character in a string s.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/**Puts a given character c according a given file descriptor.*/
void	ft_putchar_fd(char c, int fd);
/**Puts a given string s according a given file descriptor.*/
void	ft_putstr_fd(char *s, int fd);
/**Puts a given string s with a new line according a given file descriptor.*/
void	ft_putendl_fd(char *s, int fd);
/**Puts a given integer n as string according a given file descriptor.*/
void	ft_putnbr_fd(int n, int fd);
/**Creates a new t_list node.*/
t_list	*ft_lstnew(void *content);
/**Adds a node at the beginning of the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new);
/**Returns the list size.*/
int		ft_lstsize(t_list *lst);
/**Returns a pointer to the last node of the list.*/
t_list	*ft_lstlast(t_list *lst);
/**Add a node at the end of the list.*/
void	ft_lstadd_back(t_list **lst, t_list *new);
/**Free content and node that was given.*/
void	ft_lstdelone(t_list *lst, void (*del)(void*));
/**Free the full list.*/
void	ft_lstclear(t_list **lst, void (*del)(void*));
/**Applies a function f on every node in the list.*/
void	ft_lstiter(t_list *lst, void (*f)(void *));
/**Returns a pointer to a new list applied on each node a function f.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif