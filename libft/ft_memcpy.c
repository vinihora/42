/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 11:00:22 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 15:25:05 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*ptrdest;
	unsigned const char		*ptrsrc;
	unsigned int			i;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned const char *)src;
	i = 0;
	if (ptrdest == NULL && ptrsrc == NULL)
		return (NULL);
	while (i < n)
	{
		*((char *)ptrdest + i) = *((char *)ptrsrc + i);
		i++;
	}
	return (dest);
}
