/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:26:38 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/07 18:36:26 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *)big);
	while (*big && len-- >= ft_strlen(little))
	{
		if (*big == *little && ft_strncmp(big, little, ft_strlen(little)) == 0)
		{
			return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
