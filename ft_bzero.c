/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:27:06 by mabda             #+#    #+#             */
/*   Updated: 2026/10/04 23:01:41 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)s;
	while (n > 0)
	{
		*x = '\0';
		n--;
		x++;
	}
}
/*
int	main(void)
{

	char str[]= "HELLO";
	int	i;
	i = 0; 
	printf("Before\n");
	while (i < 5)
	{
		printf("char -> %c  ASCII -> %d\n", str[i], str[i]);
		i++;
	}

	ft_bzero(str, 3);

	i = 0;
	printf("\nAfter\n");
	while(i < 5)
	{
		printf("char -> %c  ASCII -> %d\n", str[i], str[i]);
		i++;
	}

return (0);
}*/