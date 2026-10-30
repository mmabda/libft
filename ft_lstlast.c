/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 21:47:05 by mabda             #+#    #+#             */
/*   Updated: 2026/10/01 22:14:38 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main (void)
{
	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");
	t_list *node3 = ft_lstnew("3");

	printf("node1_content :%s\n", (char *)node1->content);
	printf("node2_content :%s\n", (char *)node2->content);
	printf("node3_content :%s\n", (char *)node3->content);
	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);
	t_list *results = ft_lstlast(node1);
	printf("\nlast node content : %s\n", (char *)results->content);
	return (0);
}*/