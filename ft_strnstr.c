/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:32:02 by rkabzins          #+#    #+#             */
/*   Updated: 2022/02/18 02:02:56 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	index;
	int	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	index = 0;
	while (index <= ((int) len - needle_len))
	{
		if (haystack[0] == needle[0])
		{
			if (ft_strncmp(haystack, needle, needle_len) == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
