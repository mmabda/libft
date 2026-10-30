/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 22:47:53 by mabda             #+#    #+#             */
/*   Updated: 2026/09/26 23:25:15 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s1 == NULL || s2 == NULL )
		return (NULL);
	str = malloc ((ft_strlen(s1)) + (ft_strlen(s2)) + 1);
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *str;
	
	str = ft_strjoin(" ", "World");
	printf("%s\n", str);
	free(str);
	return (0);
}*/