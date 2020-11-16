/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 09:42:33 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/08 09:47:34 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char *))
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (index < length)
	{
		if (f(tab[index]))
			count++;
		index++;
	}
	return (count);
}
