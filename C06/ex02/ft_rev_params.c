/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:11:39 by etaranti          #+#    #+#             */
/*   Updated: 2020/10/29 20:02:55 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(char *str)
{
	char *param;

	param = str;
	while (*param != 0)
	{
		write(1, param, 1);
		param++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	while (argc > index)
	{
		print_params(argv[argc - 1]);
		argc--;
	}
	return (0);
}
