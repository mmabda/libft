/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 23:42:47 by mabda             #+#    #+#             */
/*   Updated: 2026/10/12 19:34:49 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	while (ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	if (start > end)
	{
		start = 0;
		end = 0;
	}
	str = ft_substr(s1, start, (end - start));
	if (str == NULL)
		return (NULL);
	return (str);
}
/*
int	main (void)
{
	char	*str;
	str = ft_strtrim("422amman4224", "42");
	printf("%s", str);
	free(str);
	return (0);
}*/
