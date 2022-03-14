/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkabzins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:36:07 by rkabzins          #+#    #+#             */
/*   Updated: 2022/02/18 01:36:44 by rkabzins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*dest;
	unsigned int	s1_size;
	unsigned int	s2_size;
	unsigned int	j;
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	i = 0;
	j = -1;
	dest = malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (!(dest))
		return (NULL);
	while (s1[i++])
		dest[i] = s1[i];
	while (s2[++j])
	{
		dest[i] = s2[j];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
