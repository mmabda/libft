/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:42:08 by mabda             #+#    #+#             */
/*   Updated: 2026/09/24 23:21:49 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	s;

	s = ft_strlen(src);
	if (size == 0)
		return (s);
	while (size - 1 > 0 && *src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
		size--;
	}
	*dst = '\0';
	return (s);
}
