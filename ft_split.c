/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:39:39 by danicamp          #+#    #+#             */
/*   Updated: 2026/04/20 19:15:27 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char sep)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	if (s[i] != sep && s[i + 1] != sep)
		words++;
	i++;
	while (s[i])
	{
		if (s[i] == sep && s[i + 1] != sep)
			words++;
		i++;
	}
	return (words);
}

static char	*extract_word(const char *s, int start, int len)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		start;
	int		j;

	i = 0;
	j = 0;
	start = 0;
	words = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!words || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			words[j] = extract_word(s, start, i - start);
			j++;
		}
		i++;
	}
	words[count_words(s, c)] = NULL;
	return (words);
}
