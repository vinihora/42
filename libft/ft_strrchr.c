/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:11:08 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 15:33:03 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	lenght;

	lenght = ft_strlen(s);
	while (lenght--)
	{
		if ((char)c == s[lenght])
		{
			return (((char *)s + lenght));
		}
	}
	return (NULL);
}
