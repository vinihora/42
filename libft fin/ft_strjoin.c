/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 17:00:23 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/23 17:11:25 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	size_t			lenght;
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	lenght = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(lenght * sizeof(char));
	while (s1[count])
	{
		res[i] = s1[count];
		i++;
		count++;
	}
	count = 0;
	while (s2[count])
	{
		res[i] = s2[count];
		i++;
		count++;
	}
	res[i] = '\0';
	return (res);
}
