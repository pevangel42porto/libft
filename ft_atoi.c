/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:28:44 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/09 15:47:03 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	signal;
	int	nbr;

	i = 0;
	signal = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + str[i] - '0';
		i++;
	}
	if (signal % 2 == 0)
		return (nbr);
	else 
		return (-nbr);
}
/*
int	main ()
{
	char example[] = "   ---+++3222332wefrjnfbvmnddk";

	printf("%d", ft_atoi(example));
}*/
