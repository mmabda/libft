/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 17:26:22 by mabda             #+#    #+#             */
/*   Updated: 2026/09/24 23:22:27 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint(126));
	printf("%d\n", ft_isprint(30));
	return (0);
}*/
