/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:39:39 by danicamp          #+#    #+#             */
/*   Updated: 2026/04/28 15:02:05 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char sep)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == sep)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != sep)
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

static void	free_word(char **words, int j)
{
	while (j >= 0)
	{
		free(words[j]);
		j--;
	}
	free(words);
}

static char	**put_word(const char *s, char sep, char **words)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != sep)
		{
			start = i;
			while (s[i] != sep && s[i])
				i++;
			words[j] = extract_word(s, start, i - start);
			if (!words[j])
				return (free_word(words, j - 1), NULL);
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		word_count;

	word_count = count_words(s, c);
	if (!s)
		return (NULL);
	words = malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	words = put_word(s, c, words);
	return (words);
}
