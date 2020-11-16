/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:18:02 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/06 14:45:15 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fac;

	fac = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}
