/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylopez-c <ylopez-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:50:33 by ylopez-c          #+#    #+#             */
/*   Updated: 2023/06/18 15:54:44 by ylopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_num(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

static int	ft_sign(int nbr)
{
	if (nbr < 0)
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_itoa(int nbr)
{
	int			i;
	char		*ptr;
	int			is_negative;

	if (nbr == 0)
		return (ft_strdup("0"));
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = ft_sign(nbr);
	i = ft_count_num(nbr);
	ptr = ft_calloc(sizeof(char), (i + 1));
	if (!ptr)
		return (NULL);
	if (nbr < 0)
		nbr = nbr * -1;
	while (i > 0)
	{
		ptr[--i] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	if (is_negative == 1)
		ptr[0] = '-';
	return (ptr);
}

/*int main(void)
{
	char	*i;
	i = ft_itoa(-1000);
	printf("string: %s", i);
}*/
