/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylopez-c <ylopez-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:15:38 by ylopez-c          #+#    #+#             */
/*   Updated: 2023/06/29 12:16:59 by ylopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*int main ()
{
	t_list *a;
	t_list *b;
	t_list *c;
	t_list *d;

	void *k;
	k = NULL;
	void *j;
	j = NULL;

	void *v;
	v = NULL;
	void *n;
	n = NULL;

	a = ft_lstnew(k);
	b = ft_lstnew(j);
	c = ft_lstnew(v);
	d = ft_lstnew(n);
	

	ft_lstadd_back(&a,b);
	ft_lstadd_back(&a,c);
	ft_lstadd_back(&a,d);

	ft_lstiter(a , (free));

}*/
