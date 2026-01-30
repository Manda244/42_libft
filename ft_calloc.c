/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:47:08 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/30 10:57:50 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*index;
	size_t	total;

	total = nmemb * size;
	if (size != 0 && nmemb > (total / size))
		return (NULL);
	index = malloc(nmemb * size);
	if (!index)
		return (NULL);
	ft_bzero(index, nmemb * size);
	return (index);
}
