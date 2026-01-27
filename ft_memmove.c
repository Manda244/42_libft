/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:48:21 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:48:22 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	c;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		c = 0;
		while (c < n)
		{
			*(unsigned char *)(dest + c) = *(unsigned char *)(src + c);
			c++;
		}
	}
	else
	{
		c = n;
		while (c > 0)
		{
			*(unsigned char *)(dest + (c - 1))
				= *(unsigned char *)(src + (c - 1));
			c--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "123456789";

	printf("%s\n" , str);

	ft_memmove(str + 2, str, 5);

	printf("%s\n" , str);
	return 0;
}
*/
