/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:38:29 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/03 17:45:55 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(char c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	example;

	example = '	';
	printf("%d", ft_isprint(example));
}
