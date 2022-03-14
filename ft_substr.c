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

char	*ft_substr(const char *source, int start, int finish)
{
	int		i;
	int		len;
	char	*dest;

	len = finish - start;
	dest = malloc(sizeof(char *) * (len + 1));
	i = start;
	while (i < finish && (*(source + i) != 0))
	{
		*dest = *(source + i);
		dest++;
		i++;
	}
	*dest = 0;
	return (dest - len);
}
