/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 23:53:32 by mabda             #+#    #+#             */
/*   Updated: 2026/10/16 17:42:17 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static int	free_array(char **s, size_t i)
{
	while (i > 0)
	{
		i--;
		free(s[i]);
	}
	free(s);
	return (0);
}

static char	**fill_split(char **arr, char const *s, char c, size_t count)
{
	size_t		i;
	char const	*start;

	i = 0;
	while (count--)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s != c && *s != '\0')
			s++;
		arr[i] = ft_substr(start, 0, s - start);
		if (!arr[i])
		{
			free_array(arr, i);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**arr;

	count = count_words(s, c);
	arr = malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (NULL);
	return (fill_split(arr, s, c, count));
}
/*
int	main(void)
{
	char	*str;
	char	**array;
	int	i = 0;
	str = "xxHelloxWorldxxxxxAmxmanxxx";
	array = ft_split(str, 'x');

	while (i < 5)
	{
		printf("%s\n", array[i]);
		i++;
	}
	free_array(array, i);
	return (0);
}*/
