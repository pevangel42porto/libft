/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:12:35 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/11 11:24:17 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	p_dest = dest;
	p_src = src;
	while (n--)
	{
		*p_dest++ = *p_src++;
	}
	return (dest);
}
/*
int	main()
{
	char dest[] = "Ola bem vindo";
	char src[] = "ao mundo 42!";

	ft_memcpy(dest, src, sizeof(src));
	printf("%s", dest);
}*/
