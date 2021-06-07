/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:26:06 by veduardo          #+#    #+#             */
/*   Updated: 2021/06/07 17:53:46 by veduardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		how_much_digits(int n);
unsigned long int	ft_pow(int base, int exp);
char				*conditions(int n, char *arr);

char	*ft_itoa(int n)
{
	unsigned int	x;
	char			*arr;
	unsigned int	count;

	x = how_much_digits(n);
	count = 0;
	arr = 0;
	if (conditions(n, arr))
		return (conditions(n, arr));
	arr = (char *)ft_calloc((x + 1), sizeof(char));
	if (!(arr))
		return (NULL);
	if (n < 0)
	{
		arr = (char *)ft_calloc((x + 2), sizeof(char));
		arr[0] = '-';
		count++;
	}
	while (x--)
	{
		arr[count] = ((unsigned int)n / ft_pow(10, (x - 1))) + '0';
		n = (unsigned int)n % ft_pow(10, x - 1);
		count++;
	}
	return (arr);
}

unsigned int	how_much_digits(int n)
{
	unsigned int		i;
	unsigned long int	x;

	if (n < 0)
		n = n * -1;
	if (n == -2147483648LL)
		return (0);
	x = 1;
	i = 0;
	while ((n / x))
	{
		x = x * 10;
		i++;
	}
	return (i);
}

unsigned long int	ft_pow(int base, int exp)
{
	int					save;
	unsigned long int	saveb;

	saveb = (unsigned long int)base;
	save = base;
	if (exp == 1)
		return (base);
	if (exp == 0)
		return (1);
	while (exp > 1)
	{
		saveb = saveb * save;
		exp--;
	}
	return (saveb);
}

char	*conditions(int n, char *arr)
{
	if ((n <= 9 && n > 0))
	{
		arr = (char *)ft_calloc(2, sizeof(char));
		arr[0] = n + '0';
	}
	if ((n >= -9 && n < 0))
	{
		n = n * -1;
		arr = (char *)ft_calloc(3, sizeof(char));
		arr[0] = '-';
		arr[1] = n + '0';
	}
	if (n == -2147483648)
	{
		arr = (char *)malloc(12 * sizeof(char));
		ft_strlcpy(arr, "-2147483648", 12);
	}
	if (n == 0)
	{
		arr = (char *)ft_calloc((2), sizeof(char));
		arr[0] = '0';
	}
	return (arr);
}
