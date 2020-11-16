/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 09:19:21 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/12 08:02:10 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int index;
	int *ret;

	index = 0;
	if (!(ret = (int *)malloc(length * sizeof(int))))
		return (0);
	while (index < length)
	{
		ret[index] = f(tab[index]);
		index++;
	}
	return (ret);
}
