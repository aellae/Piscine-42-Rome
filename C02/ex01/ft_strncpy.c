/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:52:20 by etaranti          #+#    #+#             */
/*   Updated: 2020/10/30 16:26:37 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = -1;
	while (++index < n && src[index])
		dest[index] = src[index];
	while (index < n)
		dest[index++] = '\0';
	return (dest);
}
