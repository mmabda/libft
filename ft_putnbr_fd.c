/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 00:19:23 by mabda             #+#    #+#             */
/*   Updated: 2026/09/30 22:22:41 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	number;
	char		c;

	number = n;
	if (number < 0)
	{
		number = number * -1;
		write(fd, "-", 1);
	}
	if (number >= 0 && number < 10)
	{
		c = number + 48;
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd((number / 10), fd);
		ft_putnbr_fd((number % 10), fd);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}*/