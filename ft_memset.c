/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:48:29 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:48:30 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	dest;

	if (!s)
		return (NULL);
	dest = 0;
	while (dest < n)
	{
		*(unsigned char *)(s + dest) = (unsigned char)c;
		dest++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[20] = "hello world";
	char str2[20] = "hello world";

	printf("%s\n" , str1);

	ft_memset(str1, 'a', 5);
	ft_memset(str2, 'a', 2);

	printf("%s\n" , str1);
	printf("%s\n" , str2);
	return 0;	
}
*/
