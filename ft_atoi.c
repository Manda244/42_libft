/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:46:36 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/30 10:57:30 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	y;

	i = 0;
	y = 1;
	while ((8 <= *nptr && *nptr <= 14) || *nptr == 32)
		nptr++;
	if (*nptr == 45 || *nptr == 43)
	{
		if (*nptr == 45)
			y = -y;
		nptr++;
	}
	while ('0' <= *nptr && *nptr <= '9')
	{
		i = i * 10 + (*nptr - '0');
		nptr++;
	}
	return (i * y);
}
