/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:56:01 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/29 07:54:28 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int main(void)
{
	t_list  *ma;
	t_list  *last;

	ma = ft_lstnew("two");
	ft_lstadd_front(&ma, ft_lstnew("one"));
	last = ft_lstlast(ma);
	
	printf("%s\n", (char *)last->content);
	return (0);
}
*/