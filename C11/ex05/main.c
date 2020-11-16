/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:16:42 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/12 16:16:57 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int		check_error(int c, int num)
{
	if (c == 4 && num == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if (c == 5 && num == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int		check_operator(char *str)
{
	int		i;
	char	operator;

	i = ft_strlen(str);
	if (i == 1)
	{
		operator = str[0];
		if (operator == '+')
			return (1);
		else if (operator == '-')
			return (2);
		else if (operator == '*')
			return (3);
		else if (operator == '/')
			return (4);
		else if (operator == '%')
			return (5);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int result;
	int num1;
	int num2;
	int operator;

	g_f[0] = ft_sum;
	g_f[1] = ft_sub;
	g_f[2] = ft_mult;
	g_f[3] = ft_div;
	g_f[4] = ft_mod;
	if (argc != 4)
		return (0);
	if ((operator = check_operator(argv[2])) == 0)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	if (check_error(operator, num2))
		return (0);
	result = (*g_f[operator - 1])(num1, num2);
	ft_putnbr(result);
	ft_putchar('\n');
}
