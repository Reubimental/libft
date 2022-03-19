/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:55:14 by rkabzins          #+#    #+#             */
/*   Updated: 2022/02/18 05:28:43 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char)*str1 == (unsigned char)*str2 && *str1 != 0 && n - 1 > 0)
	{
		str1++;
		str2++;
		n--;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
