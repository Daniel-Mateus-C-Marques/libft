/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:21:49 by danicamp          #+#    #+#             */
/*   Updated: 2026/03/10 12:50:03 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr_str;
	size_t			i;

	i = 0;
	ptr_str = (unsigned char *)str;
	while (i < n && ptr_str[i] != '\0')
	{
		if (ptr_str[i] == c)
			return (ptr_str + i);
		i++;
	}
	if (ptr_str[i] == c)
		return (ptr_str + i);
	return (NULL);
}
