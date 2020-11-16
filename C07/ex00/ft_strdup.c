/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:28:27 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/06 09:44:55 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = src;
	while (tmp[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(char *src)
{
	char *dst;

	dst = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dst)
		return (0);
	ft_strcpy(dst, src);
	return (dst);
}
