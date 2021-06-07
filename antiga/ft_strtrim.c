/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 18:59:49 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/23 19:49:33 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int 	i;
	char			*res;
	unsigned int	count;
	unsigned int	count2;
	
	count = 0;
	count2 = 0;
	i = 0;
	res = malloc(ft_strlen(s1) * sizeof(char));

	if (*set == '\0')
		return (NULL);
	while (set[count])
	{
		if (s1[0] == set[count])
		{
			i++;
			break;
		}
		count++;
	}
	while (s1[i])
	{
		res[count2] = s1[i];
		i++;
		count2++;
	}
	count = 0;
	while (set[count])
	{
		if (res[count2 - 1] == set[count])
		{
			res[count2 - 1] = '\0';
			break;
		}
		count++;
	}
	return (res);
}

// #include <stdio.h>
	
// int main(void)
// {
// 	char a[] = "lualualuawww";
// 	char *r;

// 	r = ft_strtrim(a, "");
// 	printf("%s", r);
// }