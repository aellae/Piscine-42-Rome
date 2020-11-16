/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:09:08 by etaranti          #+#    #+#             */
/*   Updated: 2020/10/30 11:38:09 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(char c)
{
	char	hex;
	char	hex2;
	int		negative;

	ft_putchar('\\');
	if (c < 0)
	{
		negative = (-128 - (c)) * -1 + 128;
		hex = negative / 16;
		hex2 = negative % 16;
	}
	else
	{
		hex = c / 16;
		hex2 = c % 16;
	}
	if (hex < 10)
		ft_putchar(hex + '0');
	else
		ft_putchar(hex + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + '0');
	else
		ft_putchar(hex2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != 0)
	{
		if (*ptr <= 31 || *ptr == 127)
			print_hex(*ptr);
		else
			write(1, ptr, 1);
		ptr++;
	}
}
