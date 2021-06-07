/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 18:55:36 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/07 17:46:30 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;
	int		count;

	count = 0;
	i = ft_strlen(s);
	new = malloc((i + 1) * sizeof(char));
	if (!(new))
		return (NULL);
	while (s[count] != 0)
	{
		new[count] = s[count];
		count++;
	}
	new[count] = '\0';
	return (new);
}
