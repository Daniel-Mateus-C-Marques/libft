/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:58:54 by danicamp          #+#    #+#             */
/*   Updated: 2026/04/26 13:54:15 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	upper_odd(unsigned int i, char c)
	{
		if ((i % 2 != 0) && c >= 'a' && c <= 'z')
			c -= 32;
		return (c);
	}
void	upper_odd2(unsigned int i, char *c)
	{
		if ((i % 2 != 0) && *c >= 'a' && *c <= 'z')
			*c -= 32;
	}
void	*upper_content(void *content)
{
	int	i;
	char *text;

	i = 0;
	text = (char *)content;
	while (text[i])
	{
		text[i] = ft_toupper(text[i]);
		i++;
	}
	return (text);
}
void	free_content(void *content)
{
	free(content);
}
void	print_node_content(t_list *lst)
{
	int	i;

	i = 0;
	printf("List content\n");
	while(lst)
	{
		printf("%d - %s\n", i, (char *)lst->content);
		lst = lst->next;
		i++;
	}
}

int main()
{
	/*
	//test ft_isalpha
	printf("%d\n", ft_isalpha('c'));
	printf("%d\n", ft_isalpha('2'));
	printf("%d\n", ft_isalpha('C'));
	*/

	/*
	//test ft_isdigit
	printf("%d\n", ft_isdigit('e'));
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit('A'));
	*/

	/*
	//test ft_isalnum
	printf("%d\n", ft_isalnum('e'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('5'));
	*/

	/*
	//test ft_isascii
	printf("%d\n", ft_isascii('e'));
	printf("%d\n", ft_isascii(-1));
	printf("%d\n", ft_isascii('f'));
	printf("%d\n", ft_isascii(' '));
	*/

	/*
	//test ft_isprint
	printf("%d\n", ft_isprint('e'));
	printf("%d\n", ft_isprint(30));
	printf("%d\n", ft_isprint('5'));
	printf("%d\n", ft_isprint('@'));
	printf("%d\n", ft_isprint('_'));
	printf("%d\n", ft_isprint(127));
	*/

	/*
	//test ft_strlen
	printf("%d\n", ft_strlen("e"));
	printf("%d\n", ft_strlen("daniel"));
	printf("%d\n", ft_strlen("Mateus"));
	printf("%d\n", ft_strlen("ornitorrinco"));
	*/

	/*
	//test ft_memset
	char nome[7] = "atfbku";
	char test[7] = "daniel";

	printf("%s\n", nome);
	printf("%s\n", test);
	ft_memset(nome, 0, 6);
	memset(test, 0, 6);
	printf("%s\n", nome);
	printf("%s\n", test);
	*/

	/*
	//test ft_bzero
	char test[7] = "Daniel";
	char test2[7] = "Mateus";

	printf("%s\n", test);
	printf("%s\n", test2);
	ft_bzero(test, 6);
	bzero(test2, 6);
	printf("%s\n", test);
	printf("%s\n", test2);
	*/

	/*
	//test ft_memcpy
	char test[7] = "Daniel";
	char test2[7] = "Mateus";
	char test3[7] = "Daniel";
	char test4[7] = "Mateus";

	printf("%s\n%s\n", test, test2);
	printf("%s\n%s\n", test3, test4);
	ft_memcpy(test, test2, 6);
	memcpy(test3, test4, 6);
	printf("%s\n%s\n", test, test2);
	printf("%s\n%s\n", test3, test4);
	*/

	/*
	//test ft_memmove
	char test[20] = "daniel";
	char test2[20] = "DANIEL";
	//Using ft_memmove
	printf("%s\n", test);
	ft_memmove(test + 2, test, 5);
	printf("%s\n", test);
	//Using ft_memcpy
	printf("%s\n", test2);
	ft_memcpy(test2 + 2, test2, 5);
	printf("%s\n", test2);
	*/

	/*
	//test ft_strlcpy
	char src[14] = "Daniel mateus";
	char dest[7] = "Mateus";


	printf("%ld\n", ft_strlcpy(dest, src, 7));
	printf("%s\n", dest);
	*/

	/*
	//test ft_toupper
	char letter = '-';

	printf("%c\n", ft_toupper(letter));
	*/

	/*
	//test ft_tolower
	char letter = 'a';

	printf("%c\n", ft_tolower(letter));
	*/

	/*
	//test ft_strchr
	char str[10] = "Daniel";

	write(1, ft_strchr(str, 'z'), 1);
	write(1, "\n", 1);
	*/

	/*
	//test ft_strrchr
	char str[10] = "daniel";
	if (ft_strrchr(str, 'i'))
		printf("%s\n", ft_strrchr(str, 'i'));
	else if (!(ft_strrchr(str, 'i')))
		printf("NULL\n");
	*/

	/*
	//test ft_strncmp0 - Mateus
1 - Daniel
2 - C
	char s1[10] = "Danael";
	char s2[10] = "Daniel";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	*/

	/*
	//test ft_memchr
	char str[10] = "daniel";
	if (ft_memchr(str, 'e', 7))
		printf("%s\n", (char *)ft_memchr(str, 'e', 7));
	else
		printf("NULL\n");
	*/

	/*
	//test ft_memcmp
	char s1[10] = "daniel";
	char s2[10] = "daniel";
	printf("%d\n", ft_memcmp(s1, s2, 3));
	*/

	/*
	//test ft_strnstr
	char big[50] = "Daniel Mateus Campos Marques";
	char little [20] = "niel";
	if (ft_strnstr(big, little, 15))
		printf("%s\n", ft_strnstr(big, little, 15));
	else
		printf("NULL\n");
	*/

	/*
	//test ft_atoi
	printf("%d\n", ft_atoi("          13435454"));
	*/

	/*
	//test ft_calloc
	int    *ptr;
	int    *ptr2;

	ptr = ft_calloc(10, sizeof(int));
	ptr2 = malloc(7 * sizeof(int));
	printf("%d\n", *ptr);
	printf("%d\n", *ptr2);
	free(ptr);
	free(ptr2);
	*/

	/*
	//test ft_strdup
	char src[20] = "daniel";
	char *dest = "\0";

	printf("antes (src): %s\n", src);
	printf("depois (dest): %s\n", dest);
	dest = ft_strdup(src);
	printf("depois (src)%s\n", src);
	printf("depois (dest)%s\n", dest);
	free(dest);
	*/

	/*
	//test ft_substr
	char	nome[50] = "Daniel Mateus Campos";
	char	*sub;

	sub = ft_substr(nome, 0, 0);
	printf("%s\n", nome);
	printf("%s\n", sub);
	free(sub);
	*/

	/*
	//test ft_strjoin
	char s1[50] = "daniel ";
	char s2[50] = "Mateus";

	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", s1);
	printf("%s\n", s2);
	*/

	/*
	//test ft_strtrim
	printf("%s\n", ft_strtrim("___+++_+_+_+_+_+daniel_+_+_+_++_+_", "_+"));
	*/

	/*
	//test ft_split
	char	**split;
	int		i;

	i = 0;
	split = ft_split(",daniel,,mat..s,,,,campos,marques,", ',');
	while (split[i])
	{
		printf("%s ", split[i]);
		free(split[i]);
		i++;
	}
	printf("\n");
	free(split);
	*/

	/*
	//test ft_itoa
	int	n = -123456789;
	printf("%s\n", ft_itoa(n));
	*/

	/*
	//test ft_strmapi
	char *new = ft_strmapi("daniel", upper_odd);
	printf("%s\n", new);
	free(new);
	*/

	/*
	//test ft_striteri
	char	nome[] = "daniel";	
	ft_striteri(nome, upper_odd2);
	printf("%s\n", nome);
	*/

	/*
	//test ft_putchar_fd
	ft_putchar_fd('d', 3);
	*/

	/*
	//test ft_putstr_fd
	char nome[] = "daniel";
	ft_putstr_fd(nome, 3);
	*/

	/*
	//test ft_putendl_fd
	char nome[] = "daniel";
	ft_putendl_fd(nome, 1);
	*/

	/*
	//test ft_putnbr_fd
	ft_putnbr_fd(-100, 1);
	*/

	//test ft_lstnre
	t_list	*begin;
	t_list	*first;
	t_list	*second;

	begin = NULL;
	//Test ft_lstnew 
	first = ft_lstnew(ft_strdup("Daniel"));
	second = ft_lstnew(ft_strdup("Mateus"));
	printf("%s\n", (char *)first->content);
	printf("%s\n", (char *)second->content);
	//Test ft_lstadd_front
	ft_lstadd_front(&begin, first);
	ft_lstadd_front(&begin, second);
	printf("1- %s\n", (char*)begin->content);
	printf("2- %s\n", (char*)begin->next->content);
	//test ft_size
	printf("Size: %d\n", ft_lstsize(begin));
	printf("Last: %s\n", (char *)ft_lstlast(begin)->content);
	//test ft_lstadd_back
	ft_lstadd_back(&begin, ft_lstnew(ft_strdup("Campos")));
	printf("3- %s\n", (char*)ft_lstlast(begin)->content);
	/*
	//test ft_lstdelone and ft_lstclear
	printf("Aoagando lista ...\n");
	ft_lstclear(&begin, free_content);
	if (!begin)
		printf("Lista Vazia\n");
	*/
	print_node_content(begin);
	//test ft_lstiter and ft_lstmap
	print_node_content(ft_lstmap(begin, upper_content, free_content));

}

