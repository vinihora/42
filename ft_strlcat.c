/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:33:58 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/07 20:36:11 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	loop;
	size_t	aux;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	dest_length = 0;
	while (dest[dest_length] && dest_length < size)
		dest_length++;
	aux = dest_length;
	loop = 0;
	if (dest_length < size)
	{
		while (dest_length < (size - 1) && src[loop])
			dest[dest_length++] = src[loop++];
		dest[dest_length] = '\0';
	}
	if (size - 1 < aux)
		return (size + src_length);
	return (src_length + aux);
}
