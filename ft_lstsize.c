/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:23:40 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/28 17:55:05 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*ma = NULL;

	ft_lstadd_front(&ma, ft_lstnew("1"));
	ft_lstadd_front(&ma, ft_lstnew("2"));
	ft_lstadd_front(&ma, ft_lstnew("3"));
	printf("%d\n", ft_lstsize(ma));
	return (0);
}
*/