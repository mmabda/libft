/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:52:55 by mabda             #+#    #+#             */
/*   Updated: 2026/09/23 20:59:19 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	s = i;
	while (src[j] != '\0' && size - 1 > i)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (s + ft_strlen(src));
}
/*
int main(void)
{
    char dst[3] = "Hi";
    
    printf("%zu\n", ft_strlcat(dst, "Wrold", 2));
    printf("%s\n", dst);
    return (0);
}*/
