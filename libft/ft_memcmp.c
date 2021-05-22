/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:17:47 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 15:24:50 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*line1;
	unsigned char	*line2;

	line1 = (unsigned char *)str1;
	line2 = (unsigned char *)str2;
	while (n--)
	{
		if (*line1 != *line2)
		{
			return (*line1 - *line2);
		}
		line1++;
		line2++;
	}
	return (0);
}
