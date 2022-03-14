/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:33:34 by rkabzins          #+#    #+#             */
/*   Updated: 2022/02/18 01:34:00 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			dest_size;
	size_t			si;
	char			*de;
	const char		*sr;

	de = dest;
	sr = src;
	si = size;
	while (size-- != 0 && *de != '\0')
		de++;
	dest_size = de - dest;
	si = size - dest_size;
	if (si == 0)
		return (dest_size + ft_strlen(sr));
	while (*sr != '\0')
	{
		if (si != 1)
		{
			*de++ = *sr;
			si--;
		}
		sr++;
	}
	*de = '\0';
	return (dest_size + (sr - src));
}
