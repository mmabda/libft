/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:19:56 by mabda             #+#    #+#             */
/*   Updated: 2026/09/22 13:46:55 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		n--;
		d++;
		s++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned char src[] = "HELLO";
	unsigned char dest[] = "WORLD";

	printf("Before\n");

	printf("src: %s \ndest: %s", src, dest);
	
	ft_memcpy(dest, src, 5);

	printf("\nAfter\n");
	
	printf("src: %s \ndest: %s\n", src, dest);
	
	return (0);
}*/