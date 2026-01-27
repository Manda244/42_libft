/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:47:08 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/26 19:51:50 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*index;

	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	index = malloc(nmemb * size);
	if (!index)
		return (NULL);
	ft_bzero(index, nmemb * size);
	return (index);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int	*ptr;

	ptr = (int *)ft_calloc(5, sizeof(int));

	if (!ptr)
		return (1);

	while (i < 5)
	{
		printf("ptr[%d] = %d\n" , i, ptr[i]);
		i++;
	}

	free(ptr);
	return 0;
}
*/
