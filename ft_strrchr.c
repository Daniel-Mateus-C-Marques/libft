/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:29:04 by danicamp          #+#    #+#             */
/*   Updated: 2026/04/26 16:36:35 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*letter;

	i = 0;
	letter = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			letter = s + i;
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	else if (letter != NULL)
		return ((char *)letter);
	return (NULL);
}
