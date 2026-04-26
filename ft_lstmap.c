/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danicamp <danicamp@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:03:52 by danicamp          #+#    #+#             */
/*   Updated: 2026/04/25 10:30:42 by danicamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*temp;

	ft_lstiter(lst, f);
	lst_new = ft_lstnew(lst->content);
	temp = lst_new;
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(temp, ft_lstnew(lst->content));
		lst = lst->next;
		temp = temp->next;
	}
	return (lst_new);
}
