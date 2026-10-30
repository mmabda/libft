/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:11:06 by mabda             #+#    #+#             */
/*   Updated: 2026/10/11 13:09:49 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = (unsigned char)c;
		n--;
		str++;
	}
	return (s);
}
/*
int	main (void)
{
	char str[20] = "Hello";
	printf("%s", (char *)ft_memset(str, 'A', 3));
	return (0); 
}*/