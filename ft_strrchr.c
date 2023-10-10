/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:48:27 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/09 13:55:49 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s + ft_strlen(s);
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str--;
	}
	return (str);
}
/*
int	main()
{
	const char example[] = "Bem vindo aom mundo 42!";
	int c = 'm';

	printf("%s", ft_strrchr(example, c));
}*/
