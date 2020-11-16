/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:59:47 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/06 14:40:31 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int add;

	index = 0;
	add = 0;
	while (dest[index] != '\0')
		index++;
	while (src[add] != '\0')
	{
		dest[index + add] = src[add];
		add++;
	}
	dest[index + add] = '\0';
	return (dest);
}
