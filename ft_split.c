/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:22:20 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/20 13:41:04 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static	void	ft_cleen(char **clean, int count_words)
{
	int	i;

	i = 0;
	while (i < count_words)
	{
		free(clean[i]);
		i++;	
	}
	free(clean);
		
}
static	void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab1;
	char const	*temp;

	temp = s;
	tab1 = tab;
	while (*temp)
	{
		while (*s == sep)
			s++;
		temp = s;
		while (*temp && *temp != sep)
			temp++;
		if (*temp == sep || temp > s)
		{
			*tab1 = ft_substr(s, 0, temp - s);
			s = temp;
			tab1++;
		}
	}
	*tab1 = NULL;
}

static int	ft_count_words(char const *s, char sep)
{
	int	ft_count_words;

	ft_count_words = 0;
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s)
			ft_count_words++;
		while (*s && *s != sep)
			s++;
	}
	return (ft_count_words);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;
	int	i;

	size = ft_count_words(s, c);
	new = malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_allocate(new, s, c);
	i = 0;
	while (i < ft_count_words(s, c))
	{
		if (new[i] == NULL)
		{
			ft_cleen(new, ft_count_words(s,c));
			return (0);
		}
		i++;
	}
	return (new);
	
}
/* 
#include <stdio.h>

int	main()
{
	char const example[] = "Ola, bem vindo, ao mundo 42!";
	char	split[] = ",";

	printf("%s", ft_split(example, split);
}
 */
