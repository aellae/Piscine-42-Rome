/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 15:55:30 by etaranti          #+#    #+#             */
/*   Updated: 2020/10/30 16:22:36 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int inventory;

	index = 0;
	while (index != (size / 2))
	{
		inventory = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = inventory;
		index++;
	}
}
