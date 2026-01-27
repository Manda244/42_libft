/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:49:40 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:49:41 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 98;

	printf("%d\n" , i);
	printf("%d\n" , ft_toupper(i));
}
*/
