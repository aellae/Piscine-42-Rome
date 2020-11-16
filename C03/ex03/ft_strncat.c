/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:16:53 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/06 14:40:38 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				index;
	unsigned int	add;

	index = 0;
	add = 0;
	while (dest[index] != '\0')
		index++;
	while (src[add] != '\0' && add < nb)
	{
		dest[index + add] = src[add];
		add++;
	}
	dest[index + add] = '\0';
	return (dest);
}
