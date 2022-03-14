/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 01:35:29 by rkabzins          #+#    #+#             */
/*   Updated: 2022/03/01 01:35:34 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_length(int n)
{
	int	length;

	length = 0;
	if (n < 0)
	{
		n = n * -1;
		length++;
	}
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	number;
	int		index;

	number = n;
	index = num_length(number);
	str = malloc(sizeof(char) * (index + 1));
	if (!str)
		return (NULL);
	str[index--] = 0;
	if (number == 0)
		str[0] = '0';
	while (number < 0)
	{
		str[0] = '-';
		number = number * -1;
	}
	while (number > 0)
	{
		str[index] = '0' + (number % 10);
		n = n / 10;
		index--;
	}
	return (str);
}
