/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:11:22 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/20 12:11:24 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		cc;
	size_t				i;

	str = s;
	cc = c;
	i = 0;
	while (i < n)
	{
		str[i] = cc;
		i++;
	}
	return (s);
}
