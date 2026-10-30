/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:19:28 by mabda             #+#    #+#             */
/*   Updated: 2026/10/01 21:44:57 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
int	main (void)
{
	t_list	*node_1; 
	node_1 = NULL;
	printf("empty list : %u\n", ft_lstsize(node_1));
	
	node_1 = ft_lstnew("1 node");
	printf("1 node : %u \n", ft_lstsize(node_1));

	t_list *node_2;
	t_list *node_3;
	node_2 = ft_lstnew("2");
	node_3 = ft_lstnew("3");
	ft_lstadd_front(&node_2, node_3);
	printf("2 nodes :%u\n", ft_lstsize(node_2));
	return (0);
}*/