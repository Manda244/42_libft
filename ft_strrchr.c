/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:49:26 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/30 11:02:14 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	src;

	if (!s)
		return (NULL);
	src = ft_strlen(s);
	while (src >= 0)
	{
		if (s[src] == (char)c)
			return ((char *)s + src);
		src--;
	}
	return (NULL);
}
