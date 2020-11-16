/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:48:01 by etaranti          #+#    #+#             */
/*   Updated: 2020/10/30 11:55:19 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			index = 1;
			while (to_find[index] && str[index] == to_find[index])
				index++;
			if (!to_find[index])
				return (str);
		}
		str++;
	}
	return (0);
}
