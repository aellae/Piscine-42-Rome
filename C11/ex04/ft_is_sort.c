/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 09:48:17 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/08 12:44:11 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sort_asc(int *tab, int len, int (*f)(int, int))
{
	int index;

	index = 0;
	while (index < len - 1)
	{
		if (f(tab[index], tab[index + 1]) < 0)
			return (0);
		index++;
	}
	return (1);
}

int		sort_desc(int *tab, int len, int (*f)(int, int))
{
	int index;

	index = 0;
	while (index < len - 1)
	{
		if (f(tab[index], tab[index + 1]) > 0)
			return (0);
		index++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (sort_desc(tab, length, f) || (sort_asc(tab, length, f)))
		return (1);
	return (0);
}
