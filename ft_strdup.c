/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylopez-c <ylopez-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 08:59:38 by ylopez-c          #+#    #+#             */
/*   Updated: 2023/06/12 15:54:18 by ylopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = malloc (sizeof(char) * (ft_strlen(s1) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
			ptr[i] = s1[i];
			i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char *result;
	const char s1[] = "hola bebe";
	result = ft_strdup(s1);
	printf("mi resultado: %s" , result);	
}*/
