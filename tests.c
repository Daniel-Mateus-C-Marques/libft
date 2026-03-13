/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:58:54 by danicamp          #+#    #+#             */
/*   Updated: 2026/03/13 22:35:06 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

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
	//test ft_strncmp
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

	//test ft_strjoin
	char s1[50] = "daniel ";
	char s2[50] = "Mateus";

	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", s1);
	printf("%s\n", s2);
}
