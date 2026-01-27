/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:49:33 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:49:34 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j_len;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	j_len = ft_strlen(s);
	if (start >= j_len)
		return (ft_strdup(""));
	if (len > j_len - start)
		len = j_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "bonjour tous les mondes";
	char	*sub;

	printf("%s\n" , str);
	
	sub = ft_substr(str, 8, 4);
	
	printf("%s\n" , sub);

	free(sub);
	return 0;
}
*/