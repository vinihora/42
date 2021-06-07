/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 17:00:23 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/07 20:03:05 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	size_t			lenght;
	unsigned int	i[2];

	if (!(s1) && !(s2))
		return (NULL);
	i[2] = 0;
	i[1] = 0;
	res = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!(res))
		return (NULL);
	while (s1[i[2]])
	{
		res[i[1]] = s1[i[2]];
		i[1]++;
		i[2]++;
	}
	i[2] = 0;
	while (s2[i[2]])
	{
		res[i[1]] = s2[count];
		i[1]++;
		i[2]++;
	}
	return (res);
}
