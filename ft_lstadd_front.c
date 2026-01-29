/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:08:55 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/28 17:21:50 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*ma = NULL;
	t_list	*elemen1 = ft_lstnew("monde");
	t_list	*elemen2 = ft_lstnew("bonjour");
	
	ft_lstadd_front(&ma, elemen1);
	ft_lstadd_front(&ma, elemen2);
	
	printf("%s\n", (char *)ma->content);
	return (0);
}
*/