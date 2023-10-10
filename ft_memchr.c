/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:12:05 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/09 14:33:02 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main()
{
	const char example[] = "Ola bem vindo ao mundo 42!";
	int c = 'a';
	printf("%p", ft_memchr(example, c, 22));
}*/
