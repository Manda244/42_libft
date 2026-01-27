/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:49:30 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:49:31 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*index;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	index = ft_substr(s1, start, end - start);
	return (index);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = " ...hello 42!... ";
	char	*set = " .";
	char	*res;

	res = ft_strtrim(s1, set);
	printf("%s\n" ,s1);
	printf("%s\n" ,res);

	free(res);
	return (0);
}
*/