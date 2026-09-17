/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyatala <beyatala@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 16:59:15 by beyatala          #+#    #+#             */
/*   Updated: 2026/09/06 22:25:40 by beyatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*final;
	t_list	*list;
	t_list	*tmp;
	void	*f_tmp;

	final = NULL;
	list = lst;
	while (list)
	{
		f_tmp = f(list->content);
		if (!f_tmp)
			return (ft_lstclear(&final, del), NULL);
		tmp = ft_lstnew(f_tmp);
		if (!tmp)
			return (ft_lstclear(&final, del), NULL);
		ft_lstadd_back(&final, tmp);
		list = list->next;
	}
	return (final);
}
