/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:22:20 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/13 10:23:31 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s != c)
			*s++;
		i
	}
}

#include <stdio.h>

int	main()
{
	char const example[] = "Ola, bem vindo, ao mundo 42!";
	char	split[] = ",";

	printf("%s", ft_split(example, split);
}
