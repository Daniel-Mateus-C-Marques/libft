/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 11:29:04 by danicamp          #+#    #+#             */
/*   Updated: 2026/03/09 11:59:58 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	*letter;

	i = 0;
	letter = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			letter = str + i;
		i++;
	}
	if (str[i] == c)
		return (str + i);
	else if (letter != NULL)
		return (letter);
	return (NULL);
}
