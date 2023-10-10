/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:24:18 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/06 16:05:42 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	p_dest = dest;
	p_src = src;
	if (p_dest > p_src && p_dest < p_src + n)
	{
		while (n--)
			*p_dest-- = *p_src--;
	}
	else
		while (n--)
			*p_dest++ = *p_src++;
	return (dest);
}
/*
int	main()
{
	char dest[] = "Hello";
	char src[] = "World";

	printf("%s", (char *)ft_memmove(dest, src, sizeof(src)));
}*/
