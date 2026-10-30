/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabda <mabda@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 23:33:19 by mabda             #+#    #+#             */
/*   Updated: 2026/10/12 19:44:17 by mabda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*create_nodes(t_list *lst, t_list *head, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*new_node;
	void	*mapped_content;

	while (lst)
	{
		mapped_content = f(lst->content);
		new_node = ft_lstnew(mapped_content);
		if (!new_node)
		{
			del(mapped_content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}

/*static void *f(void *content)
{
	char	*new_str;
	size_t	i;
	t_list	*head;
	void	*mapped_content;

	new_str = ft_strdup((char *)content);
	if (!new_str)
		return (NULL);
	i = 0;
	while (new_str[i] != '\0')
	{
		new_str[i] = '4';
		i++;
	}
	return (new_str);
}*/
/*static void del(void *l)
{
	free(l);
	return ;
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*mapped_content;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	mapped_content = f(lst->content);
	head = ft_lstnew(mapped_content);
	if (!head)
	{
		del(mapped_content);
		return (NULL);
	}
	lst = lst->next;
	return (create_nodes(lst, head, f, del));
}
/*
int main (void)
{
	t_list *new_head;
	t_list *tmp;
	t_list *n1 = ft_lstnew(ft_strdup("1"));
	t_list *n2 = ft_lstnew(ft_strdup("22"));
	t_list *n3 = ft_lstnew(ft_strdup("333"));

	ft_lstadd_back(&n1, n2);
	ft_lstadd_back(&n1, n3);

	new_head = ft_lstmap(n1, *f, *del);
	tmp = new_head;

	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&n1, &del);
	ft_lstclear(&new_head, &del);

	return (0);
}*/