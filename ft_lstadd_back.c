/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:08:47 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/19 14:47:50 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL)
	{
		*lst = new;
		return (0);
	}
	temp = *lst;
	while (temp -> next)
	{
		temp = temp -> next;
	}
	temp -> next = new;
}
