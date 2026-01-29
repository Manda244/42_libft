/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 05:21:53 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/29 07:54:15 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*ma = NULL;
	
	ft_lstadd_back(&ma, ft_lstnew("a"));
	ft_lstadd_back(&ma, ft_lstnew("b"));
	ft_lstadd_back(&ma, ft_lstnew("c"));
	return (0);
}
*/