/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:12:16 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/20 12:12:19 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;
	size_t	count;

	i = (ft_strlen(s));
	new = (char *)malloc(sizeof(char) * (i + 1));
	count = 0;
	if (!new)
		return (NULL);
	while (s[count] != '\0')
	{
		new[count] = s[count];
		count++;
	}
	new[count] = '\0';
	return (new);
}
