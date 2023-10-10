/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:56:18 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/09 14:11:09 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	const char s1[] = "ola bem vindo ao mundo 42!";
	const char s2[] = "ola bem vindo ao mando 42!";

	printf("%d", ft_strncmp(s1, s2, 20));

}*/
