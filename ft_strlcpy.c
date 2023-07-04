/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylopez-c <ylopez-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:36:39 by ylopez-c          #+#    #+#             */
/*   Updated: 2023/07/02 11:57:57 by ylopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize <= 0)
		return (len);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len);
}

/*int main (void)
{
	char src[4] = "hola";
	char dst[20] = "nico";
	char dst2[20] = "nico";
	printf("%zu\n", ft_strlcpy(dst, src, 3));
	printf("mio = %s\n", dst);
	printf("%zu\n", strlcpy(dst2, src, 3));
	printf("original = %s\n", dst2);
}*/
