/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:56:10 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/06 15:15:13 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n--)
	{
		*p++ = 0;
	}
}
/*
int	main()
{
	char example[] = "Ola bem vindo ao mundo 42!";
	ft_bzero(&example, sizeof(example));

	printf("%s", example);
}*/
