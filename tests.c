/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:58:54 by danicamp          #+#    #+#             */
/*   Updated: 2026/03/05 08:55:33 by danicamp         ###   ########.fr       */
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

    //test ft_bzero
    char test[7] = "Daniel";

    printf("%s\n", test);
    ft_bzero(test, 6);
    printf("%s\n", test);
   
}