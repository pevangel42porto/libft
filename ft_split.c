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

static	void	allocate(char **tab, char const *s, char sep)
{
	char	**tab1;
	char const	temp;
 
	temp = s;
	tab1 = tab;
	while (*temp)
	{
		while (*s == sep)
			s++,
		temp = s;
		while (*temp && temp != sep)
			temp++;
		if (*temp == sep || temp > s)
		{
			*tab1 = ft_substr(s, 0, temp -s);
			s = temp;
			tab1++;
		}
	}
	*tab1 = NULL;
}

stastic	void	count_words(char const *s, char sep)
{
	int	count_words;

	count_words = 0;
	while (*s)
	{
		while (*s == sep)
			s++,
		if (*s)
			count_words++;
		while (*s && *s != sep)
			s++;
	}
	return (count_words);
}

char	**ft_split(char const *s, char c)
{
	
}

#include <stdio.h>

int	main()
{
	char const example[] = "Ola, bem vindo, ao mundo 42!";
	char	split[] = ",";

	printf("%s", ft_split(example, split);
}
