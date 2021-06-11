/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 16:29:27 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/11 16:29:59 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size_s;
	size_t	max_len;

	size_s = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (size_s < start)
	{
		sub = (char *)ft_calloc(sizeof(char), 1);
		if (!sub)
			return (NULL);
		return (sub);
	}
	max_len = size_s - start;
	if (len > max_len)
		len = max_len;
	sub = (char *)ft_calloc(sizeof(char), len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
