/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:05:47 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/10 09:51:05 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_number(char *str, int *index)
{
	int result;

	result = 0;
	while (str[*index] == '0')
		(*index)++;
	while (str[*index] <= '9' && str[*index] >= '0')
	{
		result = result * 10 + (str[*index] - '0');
		(*index)++;
	}
	return (result);
}

int		ft_atoi(char *str)
{
	int index;
	int less;
	int result;

	result = 0;
	less = 0;
	index = 0;
	while (str[index] != '\0')
	{
		while (str[index] == ' ' || ((str[index] >= 9) && (str[index] <= 13)))
			index++;
		while (str[index] == '+' || str[index] == '-')
		{
			if (str[index] == '-')
				less++;
			index++;
		}
		result = ft_number(str, &index);
		if ((less % 2) == 1)
			result = result * (-1);
		return (result);
	}
	return (result);
}
