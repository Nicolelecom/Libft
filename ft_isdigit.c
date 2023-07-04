/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylopez-c <ylopez-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:43:37 by ylopez-c          #+#    #+#             */
/*   Updated: 2023/06/30 01:19:30 by ylopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	int i;

	i = ft_isdigit('1');
	i = i + 48;
	write(1, &i, 1);
	return (0);
}*/
