/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 09:04:53 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/05 09:06:56 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_total_len(int size, char **strs, char *sep)
{
	int i;
	int str_len;
	int sep_len;

	i = 0;
	str_len = 0;
	sep_len = 0;
	while (i < size)
	{
		str_len = ft_strlen(strs[i]) + str_len;
		i++;
	}
	i = 0;
	while (i < size)
	{
		sep_len = ft_strlen(sep) + sep_len;
		i++;
	}
	return (sep_len + str_len);
}

char	*ft_strcat(char *total, char *ins)
{
	int i;
	int j;

	i = 0;
	while (total[i])
		i++;
	j = 0;
	while (ins[j])
	{
		total[i + j] = ins[j];
		j++;
	}
	total[i + j] = '\0';
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*total;
	int		total_len;

	total_len = 0;
	i = 0;
	total = 0;
	if (size == 0)
	{
		total = (char *)malloc(sizeof(char));
		*total = 0;
		return (total);
	}
	total_len = ft_total_len(size, strs, sep);
	if (!(total = (char *)malloc((total_len + 1) * (sizeof(char)))))
		return (0);
	*total = '\0';
	while (i < size)
	{
		ft_strcat(total, strs[i]);
		if (i != size - 1)
			ft_strcat(total, sep);
		i++;
	}
	return (total);
}
