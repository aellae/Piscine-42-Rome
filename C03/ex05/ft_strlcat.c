/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:55:54 by etaranti          #+#    #+#             */
/*   Updated: 2020/10/30 11:56:06 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlength(char *str)
{
	char			*ptr;
	unsigned int	index;

	ptr = str;
	index = 0;
	while (*ptr != 0)
	{
		index++;
		ptr++;
	}
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	dlength;
	char			*dest2;
	char			*src2;

	dest2 = dest;
	src2 = src;
	index = size;
	while (index-- != 0 && *dest2 != '\0')
		dest2++;
	dlength = dest2 - dest;
	index = size - dlength;
	if (index == 0)
		return (dlength + ft_strlength(src2));
	while (*src2)
	{
		if (index != 1)
		{
			*dest2++ = *src2;
			index--;
		}
		src2++;
	}
	*dest2 = '\0';
	return (dlength + (src2 - src));
}
