/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylopez-c <ylopez-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:22:27 by ylopez-c          #+#    #+#             */
/*   Updated: 2023/05/19 17:02:19 by ylopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr_s;
	unsigned char	*ptr_d;

	i = 0;
	ptr_d = (unsigned char *)dst;
	ptr_s = (unsigned char *)src;
	if (ptr_d == NULL && ptr_s == NULL)
		return (NULL);
	if (ptr_s > ptr_d)
	{
		while (i < len)
		{
			ptr_d[i] = ptr_s[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			ptr_d[len] = ptr_s[len];
	}
	return (dst);
}
