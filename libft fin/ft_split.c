/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 22:57:54 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/26 19:24:48 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**ft_get_arr(char const *str, char c)
{
	char	**arr;
	int		count;
	int		i;
	int		j;

	i = 0;
	count = 0;
	while (str[i])
	{
		j = i;
		while (str[j] != c && str[j] != '\0')
			j++;
		if (j > i)
		{
			count++;
			i = j;
			continue ;
		}
		i++;
	}
	arr = (char **)malloc((count + 1) * sizeof(char *));
	return (arr);
}

static	char	**ft_free(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count + 1)
	{
		free(str[i++]);
	}
	free(str);
	return (NULL);
}

static	void	init_vars(int *i, int *count)
{
	*count = 0;
	*i = -1;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;
	int		i;
	int		j;

	str = ft_get_arr(s, c);
	if (!s || !str)
		return (NULL);
	init_vars(&i, &count);
	while (s[++i] != '\0')
	{
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (j > i)
		{
			str[count] = (char *)malloc(sizeof(char) * (j - i + 1));
			if (!str[count])
				return (ft_free(str, count));
			ft_strlcpy(str[count++], s + i, j - i + 1);
			i = j - 1;
		}
	}
	str[count] = 0;
	return (str);
}
