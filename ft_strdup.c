/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:48:47 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:48:48 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*index;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	index = (char *)malloc(sizeof(char) * (len + 1));
	if (index == NULL)
		return (NULL);
	while (s[i])
	{
		index[i] = s[i];
		i++;
	}
	index[i] = '\0';
	return (index);
}
/*
#include <stdio.h>

int	main(void)
{
	char	org[] = "Hello 42";
	char	*copie;

	copie = ft_strdup(org);

	printf("%s\n" , org);
	printf("%s\n" , copie);

	free(copie);
	return 0;
}
*/
