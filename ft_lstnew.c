/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marasolo <marasolo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 05:50:32 by marasolo          #+#    #+#             */
/*   Updated: 2026/01/28 17:21:02 by marasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

int main(void)
{
	t_list  *maillon;
	char    *str = "hello 42!";
	
	maillon = ft_lstnew(str);
	if (maillon)
	{
		printf("contenue de maillon : %s\n" ,(char *)maillon->content);
		printf("adress du suivant : %p\n", maillon->next);
		free(maillon);
	}
	return (0);
}
*/
