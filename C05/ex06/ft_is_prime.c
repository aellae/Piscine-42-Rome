/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:16:15 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/06 14:48:03 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recorsive(int nb, int div)
{
	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % div == 0)
		return (0);
	while (div < (nb / 2))
		if (nb % div++ == 0)
			return (0);
	return (1);
}

int		ft_is_prime(int nb)
{
	int div;

	div = 2;
	return (ft_recorsive(nb, div));
}
