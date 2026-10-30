/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 00:42:43 by mabda             #+#    #+#             */
/*   Updated: 2026/09/29 20:25:23 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*fill_str(long long int number, int len, char *str)
{
	str[len] = '\0';
	if (number == 0)
		str[0] = '0';
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		len--;
		str[len] = (number % 10) + '0';
		number = number / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	long long int	number;

	number = n;
	len = int_len(number);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (fill_str(number, len, str));
}
/*
int	main (void)
{
	printf("%ld", 2147483648);
	return (0);
}*/