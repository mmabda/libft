/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 23:31:24 by mabda             #+#    #+#             */
/*   Updated: 2026/09/29 23:53:07 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void test(unsigned int index, char *c)
{
    (void)index; 
    
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main (void)
{
	char	str[] = "hello";
	ft_striteri(str, test);
	printf("%s", str);
	return (0);
}*/
