/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:13:00 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/20 12:14:51 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count;

	if (len > ft_strlen(big))
		len = (ft_strlen(big) + 1);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		count = 0;
		while ((i + count) < len && big[i + count] == little[count])
		{
			if (little[count + 1] == '\0')
				return ((char *)big + i);
			count++;
		}
		i++;
	}
	return (NULL);
}
