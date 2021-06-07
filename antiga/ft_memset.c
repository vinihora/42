/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:27:03 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 19:27:55 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	letter;

	letter = c;
	ptr = (unsigned char *)str;
	while (n > 0)
	{
		ptr[n - 1] = letter;
		n--;
	}
	return (str);
}
