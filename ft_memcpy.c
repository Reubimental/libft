/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:02:23 by rkabzins          #+#    #+#             */
/*   Updated: 2022/02/18 10:18:58 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*srcstr;
	unsigned char	*deststr;

	if (!dest && !src)
		return (dest);
	srcstr = (unsigned char *)src;
	deststr = (unsigned char *)dest;
	while (n--)
		*deststr++ = *srcstr++;
	return (dest);
}
