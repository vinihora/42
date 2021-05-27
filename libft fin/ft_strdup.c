/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 18:55:36 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 19:24:02 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;
	int		count;

	i = ft_strlen(s);
	new = malloc(i * sizeof(s));
	while (s[count] != 0)
	{
		new[count] = s[count];
		count++;
	}
	new[count] = '\0';
	return (new);
}
