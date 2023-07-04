/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylopez-c <ylopez-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:32:14 by ylopez-c          #+#    #+#             */
/*   Updated: 2023/06/29 18:59:44 by ylopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*flst;
	t_list	*p_f;
	t_list	*aux;

	if (f == NULL)
		return (NULL);
	flst = NULL;
	while (lst)
	{
		aux = f(lst->content);
		p_f = ft_lstnew(aux);
		if (p_f == NULL)
		{
			free(aux);
			ft_lstclear(&flst, del);
			return (NULL);
		}
		ft_lstadd_back(&flst, p_f);
		lst = lst->next;
	}
	return (flst);
}
