/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:35:12 by etaranti          #+#    #+#             */
/*   Updated: 2020/10/30 15:03:09 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int index;
	int up;

	index = 0;
	up = 1;
	while (str[index] != '\0')
	{
		if ((str[index] >= '0' && str[index] <= '9') ||
				(str[index] >= 'A' && str[index] <= 'Z') ||
				(str[index] >= 'a' && str[index] <= 'z'))
		{
			if (up && str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - 32;
			else if (!up && (str[index] >= 'A' && str[index] <= 'Z'))
				str[index] = str[index] + 32;
			up = 0;
		}
		else
			up = 1;
		index++;
	}
	return (str);
}
