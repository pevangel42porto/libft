/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:54:55 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/19 14:39:40 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return (NULL);
	head = *lst;
	while (head)
	{
		temp = head -> next;
		(*del)(head -> content);
		free(head);
		head = temp;
	}
	*lst = NULL;
}
