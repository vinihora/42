/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:11:08 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/23 15:45:24 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	lenght;

	lenght = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + lenght);
	while (lenght--)
	{
		if ((char)c == s[lenght])
		{
			return (((char *)s + lenght));
		}
	}
	return (0);
}
