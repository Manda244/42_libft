/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:46:48 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:46:49 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	dest;

	dest = 0;
	while (dest < n)
	{
		*(unsigned char *)(s + dest) = 0;
		dest++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[20] = "hello world";
	char str2[20] = "hello world";

	printf("%s\n" , str1);

	ft_bzero(str1, 1);
	ft_bzero(str2, 0);

	printf("%s\n" , str1);
	printf("%s\n" , str2);
	return 0;	
}
*/
