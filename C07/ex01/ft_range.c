/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:39:15 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/09 09:42:04 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (max <= min)
		return (0);
	arr = (int *)(malloc((max - min) * sizeof(int)));
	while (min < max)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
