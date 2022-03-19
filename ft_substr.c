/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:35:27 by rkabzins          #+#    #+#             */
/*   Updated: 2022/02/18 01:35:54 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fail_start(void)
{
	char	*dest;

	dest = malloc(1);
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

char	*ft_substr(const char *source, unsigned int start, size_t finish)
{
	size_t			i;
	size_t			size;
	char			*dest;
	char			*src;

	i = 0;
	src = (char *)source;
	if (!src)
		return (NULL);
	size = ft_strlen(src);
	if (size < start)
		return (fail_start());
	dest = malloc(sizeof(char) * (finish + 1));
	if (!dest)
		return (NULL);
	while (i < finish)
	{
		dest[i] = source[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*{
	unsigned int		i;
	unsigned int		len;
	char				*dest;

	i = 0;
	if (!((char *)source))
		return (NULL);
	len = ft_strlen((char *)source);
	if (len < start)
	{
		dest = malloc(sizeof(char));
		if (!dest)
			return (NULL);
		dest[0] = 0;
		return (dest);
	}
	dest = malloc(sizeof(char) * (finish + 1));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = source[start + i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}*/