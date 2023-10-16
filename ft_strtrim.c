/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:53:26 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/13 13:03:55 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (!s1)
		return (NULL);
	if (s1 == NULL || *s1 == '\0')
			return (s1);

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	ptr = ft_substr(s1, start, end - start + 1);
	return (ptr);
}
/*
#include <stdio.h>
int	main ()
{
	char const	example[] = "aaaaola bem vindo ao mundo a 42!aaaaaa";
	char const	delete[] = "a";

	printf("%s", ft_strtrim(example, delete));
}*/
