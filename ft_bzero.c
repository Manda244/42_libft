/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:46:48 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/30 10:57:36 by marasolo         ###   ########.fr       */
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
