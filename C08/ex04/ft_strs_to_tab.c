/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:28:42 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/04 08:56:13 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char					*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str *result;

	i = 0;
	if (!(result = (t_stock_str *)malloc((ac + 2) * sizeof(t_stock_str))))
		return (0);
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		if (!(result[i].copy = (char *)malloc(result[i].size + 1)))
			return (0);
		ft_strcpy(result[i].copy, av[i]);
		i++;
	}
	result[i].str = NULL;
	return (result);
}
