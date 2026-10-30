/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 03:47:04 by mabda             #+#    #+#             */
/*   Updated: 2026/10/01 18:39:58 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node_1;

	node_1 = malloc(sizeof(t_list));
	if (!node_1)
		return (NULL);
	node_1->content = content;
	node_1->next = NULL;
	return (node_1);
}
/*
int	main (void)
{
	char	*str = "Amman";
	t_list	*node_str = ft_lstnew(str);
	printf("%s\n", (char *)node_str->content);
	printf("%p\n", (void *)node_str->next);
	free(node_str);

	int n = 42;
	t_list	*node_int = ft_lstnew(&n);
	printf("%d\n", *(int *)node_int->content);
	printf("%p", (void *)node_int->next);
	free(node_int);
	return (0);
}*/