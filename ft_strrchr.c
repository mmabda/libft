/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 19:32:05 by mabda             #+#    #+#             */
/*   Updated: 2026/10/20 17:01:23 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	x;
	const char		*start;

	start = s;
	x = (unsigned char)c;
	while (*s != '\0')
		s++;
	while (s >= start)
	{
		if ((unsigned char)*s == x)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("hellol", 'l'));
	printf("%s\n", ft_strrchr("hello", 'z'));
	printf("%p\n", ft_strrchr("hello", '\0'));
	printf("%s\n", ft_strrchr("hello", 'h'));
	return (0);
}*/