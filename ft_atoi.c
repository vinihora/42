/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:31:29 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/22 15:17:59 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	validation(unsigned char *line);

int	ft_atoi(const char *nptr)
{
	unsigned char	*line;
	int				signal;
	int				save;
	unsigned int	i;

	signal = 1;
	line = (unsigned char *)nptr;
	save = 0;
	i = validation(line);
	if (line[i] == '-')
	{
		signal = signal * -1;
		i++;
	}
	while (line[i] != '\0')
	{
		if (line[i] < '0' || line[i] > '9')
			return (save * signal);
		if (line[i] >= '0' && line[i] <= '9')
			save = save * 10 + line[i] - '0';
		i++;
	}
	return (save * signal);
}

int	validation(unsigned char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] >= '0' && line[i] <= '9')
			return (i);
		else if (line[i] == '-' && (line[i + 1] >= '0' && line[i + 1] <= '9'))
			return (i);
		else if (line[i] == '+' && (line[i + 1] >= '0' && line[i + 1] <= '9'))
			return (i + 1);
		else if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'
			|| line[i] == '\r' || line[i] == '\v' || line[i] == '\f')
			i++;
		else
			return (i);
	}
	return (i);
}
