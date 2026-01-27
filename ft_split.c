/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:48:34 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:48:35 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;
	size_t	word_len;

	if (!s)
		return (NULL);
	words = count_word(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		word_len = 0;
		while (s[word_len] && s[word_len] != c)
			word_len++;
		tab[i++] = ft_substr(s, 0, word_len);
		s += word_len;
	}
	tab[i] = NULL;
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**res = ft_split(" ceci est un test", ' ');
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