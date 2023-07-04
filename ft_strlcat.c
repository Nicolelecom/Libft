/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylopez-c <ylopez-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:44:08 by ylopez-c          #+#    #+#             */
/*   Updated: 2023/05/24 16:53:55 by ylopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	res;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (dstsize < len_d)
		res = dstsize + len_s;
	else
		res = len_d + len_s;
	while (src[i] && len_d + 1 < dstsize)
	{
		dst[len_d] = src[i];
		i++;
		len_d++;
	}
	dst[len_d] = '\0';
	return (res);
}
