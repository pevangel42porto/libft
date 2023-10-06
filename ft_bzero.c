/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:56:10 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/06 11:30:40 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t  i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

int	main()
{
	char example[] = "Ola bem vindo ao mundo 42!";

	printf("%d", ft_bzero(example, 2));
}
