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
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	while (len >= needle_len)
	{
		len--;
		if (!ft_memcmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/*	If moulinette fails me, it ONLY KO'd on Test 7.
*	The haystack is empty, the needle is "coucou", and the len is -1.
*	It SHOULD be skipping over everything, since the needle and needle_len are not NULL
*	And the While loop shouldn't even be initiated, since len is far smaller than needle_len
*	So it should skip to the end and exit with NULL, which is the expected outcome, but it fails.
*/