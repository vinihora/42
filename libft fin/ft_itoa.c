/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veduardo <veduardo@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:26:06 by veduardo          #+#    #+#             */
/*   Updated: 2021/05/27 17:09:20 by veduardo         ###   ########.fr       */
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
	if (conditions(n, arr) || how_much_digits(n) == 0)
		return (conditions(n, arr));
	arr = (char *)malloc((x + 1) * sizeof(char));
	if (n < 0)
	{
		arr = (char *)malloc((x + 2) * sizeof(char));
		arr[0] = '-';
		count++;
		n = n * -1;
	}
	while (x)
	{
		arr[count] = (n / ft_pow(10, (x - 1))) + '0';
		n = n % ft_pow(10, x - 1);
		x--;
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
		arr = (char *)malloc(1 * sizeof(char));
		arr[0] = n + '0';
	}
	if ((n >= -9 && n < 0))
	{
		n = n * -1;
		arr = (char *)malloc(2 * sizeof(char));
		arr[0] = '-';
		arr[1] = n + '0';
	}
	if (n == -2147483648)
	{
		arr = (char *)malloc(11 * sizeof(char));
		arr = "-2147483648";
	}
	if (n == 0)
	{
		arr = (char *)malloc((2) * sizeof(char));
		arr[0] = '0';
		arr[1] = '\0';
	}
	return (arr);
}