/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 17:03:51 by mabda             #+#    #+#             */
/*   Updated: 2026/09/20 17:17:56 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if (((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		|| (x >= '0' && x <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	printf("c: %d\n", ft_isalnum(65));
	printf("s: %d\n", ft_isalnum(97));
	printf("n: %d\n", ft_isalnum(48));
	printf("na: %d\n", ft_isalnum(44));

	
	return (0);
}*/
