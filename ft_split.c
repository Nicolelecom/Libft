/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylopez-c <ylopez-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:33:20 by ylopez-c          #+#    #+#             */
/*   Updated: 2023/06/27 18:53:35 by ylopez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s && s[i] != '\0')
	{	
		if (s[i] != c)
		{
			res++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (res);
}

static	int	ft_word_size(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

static char	**ft_free(char **ptr, int j)
{
	while (j-- > 0)
		free(ptr[j]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		words;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = -1;
	words = ft_count_words(s, c);
	ptr = (char **)malloc((words + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (++j < words)
	{
		while (s[i] == c)
			i++;
		size = ft_word_size(s, c, i);
		ptr[j] = ft_substr(s, i, size);
		if (ptr[j] == NULL)
			return (ft_free(ptr, j));
		i += size;
	}
	ptr[j] = NULL;
	return (ptr);
}

/*int	main(void)
{
	char	**array;
	char	*ptr;
	int		i;

	i = 0;
	ptr = "Hola_como__  _te_llamas";
	array = ft_split(ptr, '_');
	while (array[i] != NULL)
	{
		printf(" %s\n", array[i]);
		i++;
	}
	return (0);
}*/
