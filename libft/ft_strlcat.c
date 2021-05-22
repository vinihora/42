/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:14:25 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 15:27:56 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	lenght;
	int	i;
	int	n;

	n = (int)size;
	lenght = ft_strlen(dst);
	i = 0;
	while (*dst)
	{
		i++;
		dst++;
		size--;
	}
	while (size-- > 1)
	{
		*dst = *(char *)src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (n + lenght);
}
