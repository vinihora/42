/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:13:08 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/20 12:14:48 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	find;
	size_t	i;

	str = (char *)s;
	find = c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == find)
			return (str + i);
		i--;
	}
	if (s[i] == find)
		return (str + i);
	return (NULL);
}
