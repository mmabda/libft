/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:02:43 by mabda             #+#    #+#             */
/*   Updated: 2026/09/23 17:21:09 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		n--;
		str1++;
		str2++;
	}
	return (0);
}
/*
int main(void)
{
    char b1[] = "ABCDE";
    char b2[] = "ABCDF";

    printf("same (first 4): %d\n", ft_memcmp(b1, b2, 4));
    printf("Diff (all 5):   %d\n", ft_memcmp(b1, b2, 5));

    return (0);
}*/
