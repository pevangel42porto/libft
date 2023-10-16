/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:48:27 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/12 15:35:43 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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
#include <stdio.h>

int	main()
{
	const char example[] = "Bem vindo aom mundo 42!";
	int c = 'm';

	printf("%s", ft_strrchr(example, c));
}*/
