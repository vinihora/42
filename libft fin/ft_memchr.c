/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:34:45 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 15:17:04 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	letter;
	unsigned char	*array;

	letter = (unsigned char)c;
	array = (unsigned char *)s;
	while (n--)
	{
		if (*array == letter)
		{
			return (array);
		}
		else
			array++;
	}
	return (NULL);
}
