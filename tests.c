/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:58:54 by danicamp          #+#    #+#             */
/*   Updated: 2026/03/08 21:55:02 by danicamp         ###   ########.fr       */
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
}