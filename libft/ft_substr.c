/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:50:25 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/07 18:47:47 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ret;
	unsigned int	count;

	ret = ft_calloc((len) * sizeof(s));
	if (!(ret))
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == start)
		{
			while (len-- && s[i])
			{
				ret[count] = s[i];
				count++;
				i++;
			}
			return ((char *)ret);
		}
		i++;
	}
	return (ret);
}
