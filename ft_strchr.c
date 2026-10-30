/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:01:48 by mabda             #+#    #+#             */
/*   Updated: 2026/10/11 11:19:18 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	x;

	x = (unsigned char)c;
	i = 0;
	while (s[i] != '\0' && (unsigned char)s[i] != x)
		i++;
	if ((unsigned char)s[i] == x)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main(void)
{
    printf("%p\n", ft_strchr("hello", 'l'));
    printf("%p\n", ft_strchr("hello", 'z'));
    printf("%p\n", ft_strchr("hello", 0));
    return (0);
}*/