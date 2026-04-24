/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:05:33 by danicamp          #+#    #+#             */
/*   Updated: 2026/04/24 20:46:14 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(long int nb)
{
	int			len;
	long int	number;

	len = 0;
	number = nb;
	if (nb < 0)
		len++;
	else if (number == 0)
		return (1);
	while (number != 0)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

static char	*put_string(char *number, int len, long int nb)
{
	int		digit;

	digit = 0;
	if (nb < 0)
	{
		number[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		digit = nb % 10;
		number[len - 1] = digit + '0';
		nb = nb / 10;
		len--;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*number;
	long int	nb;

	nb = n;
	len = number_len(nb);
	number = malloc(len + 1);
	if (!number)
		return (NULL);
	number[len] = '\0';
	if (n == 0)
	{
		number[0] = '0';
		return (number);
	}
	number = put_string(number, len, nb);
	return (number);
}
