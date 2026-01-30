/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:48:29 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/30 10:59:49 by marasolo         ###   ########.fr       */
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
