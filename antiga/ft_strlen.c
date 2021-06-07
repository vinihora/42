/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:25:37 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 15:29:42 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str1)
{
	unsigned char	*line1;
	unsigned int	i;

	line1 = (unsigned char *)str1;
	i = 0;
	while (*line1)
	{
		i++;
		line1++;
	}
	return (i);
}
