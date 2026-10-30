/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:11:47 by mabda             #+#    #+#             */
/*   Updated: 2026/10/11 11:27:21 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_actual_len(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	actual_len;

	size = ft_strlen(s);
	if (start >= size)
		return (0);
	if (size - (size_t)start < len)
	{
		actual_len = size - (size_t)start;
		return (actual_len);
	}
	else
	{
		actual_len = len;
		return (actual_len);
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	act_len;

	if (s == NULL)
		return (NULL);
	act_len = ft_actual_len(s, start, len);
	str = malloc(act_len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (act_len > 0 && s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
		act_len--;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *str;

	str = ft_substr("Hello", 2, 1);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
