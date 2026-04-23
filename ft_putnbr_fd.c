/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:46:28 by danicamp          #+#    #+#             */
/*   Updated: 2026/04/23 20:27:11 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	int			digit;

	nb = n;
	digit = 0;
	if (nb == 0)
		write(fd, "0", 1);
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		digit = (nb % 10) + '0';
	}
	else
		digit = nb + '0';
	write(fd, &digit, 1);
}
