/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 11:44:12 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 17:19:16 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *rstdest, const void *rstsrc, int c, size_t n)
{
	unsigned char			*ptrdest;
	unsigned const char		*ptrsrc;
	unsigned int			i;

	ptrdest = (unsigned char *)rstdest;
	ptrsrc = (unsigned const char *)rstsrc;
	i = 0;
	while (i < n)
	{
		if (*((char *)ptrsrc + i) == c)
		{
			*((char *)ptrdest + i) = *((char *)ptrsrc + i);
			i++;
			return ((void*)(rstdest + i + 1));
		}
		*((char *)ptrdest + i) = *((char *)ptrsrc + i);
		i++;
	}
	return (NULL);
}
