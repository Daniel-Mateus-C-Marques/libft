/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 13:07:40 by danicamp          #+#    #+#             */
/*   Updated: 2026/03/09 12:28:24 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	i = (int)n;
	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		while (i >= 0)
		{
			ptr_dest[i] = ptr_src[i];
			i--;
		}
	}
	return (dest);
}
