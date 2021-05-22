/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:49:35 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 15:29:05 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int			i;
	size_t		count;

	i = ft_strlen(src);
	count = 0;
	while (count < size)
	{
		dst[count] = src[count];
		count++;
	}
	dst[count - 1] = '\0';
	return (i);
}
