/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:48:34 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/28 16:04:14 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**free_array(char **tab, int i)
{
	while (i > 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static int	word_len(char const *s, char c)
{
	size_t	word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			str[i] = ft_substr(s, 0, word_len(s, c));
			if (!str[i])
				return (free_array(str, i - 1));
			s += word_len(s, c);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**res = ft_split("", ' ');
	int	i = 0;

	while(res[i])
	{
		printf("mot %d : %s\n" , i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return 0;
}
*/	
