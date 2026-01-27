/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:48:05 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:48:06 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		*(unsigned char *)(dest + c) = *(unsigned char *)(src + c);
		c++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "hello world";
	char	dest[10];

	printf("%s\n" , str1);

	ft_memcpy(dest, str1, 5);

	printf("%s\n" , dest);

	return 0;
}
*/
