/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:32:55 by rkabzins          #+#    #+#             */
/*   Updated: 2022/02/18 01:33:19 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t size)
{
	char		*dst;
	const char	*src;
	size_t		siz;

	dst = dest;
	src = source;
	siz = size;
	if (siz != 0)
	{
		while (--siz != 0)
		{
			*dst++ = *src++;
			if ((*dst) == 0)
				break ;
		}
	}
	if (siz == 0)
	{
		if (size != 0)
			*dst = '\0';
		while (*src)
			src++;
	}
	return (src - source - 1);
}
