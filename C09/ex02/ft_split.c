/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 09:59:41 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/09 09:38:24 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *begin, char *end)
{
	char *ptr;
	char *string;

	if (!(ptr = (char *)malloc((end - begin + 2) * sizeof(char))))
		return (0);
	string = ptr;
	while (begin != end)
		*(ptr++) = *(begin++);
	*ptr = '\0';
	return (string);
}

int		is_sep(char str, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		final_length(char *str, char *charset, char *begin, char *end)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
		{
			str++;
			begin = 0;
			end = 0;
		}
		begin = str;
		while (*str && !is_sep(*str, charset))
		{
			end = str;
			str++;
		}
		if (end)
			count++;
	}
	return (count);
}

char	*real_split(char **str, char *c_set, char **begin)
{
	char *end;

	end = 0;
	while (**str && is_sep(**str, c_set))
	{
		(*str)++;
		*begin = 0;
		end = 0;
	}
	*begin = *str;
	while (**str && !is_sep(**str, c_set))
	{
		end = *str;
		(*str)++;
	}
	return (end);
}

char	**ft_split(char *str, char *charset)
{
	int		final_len;
	int		i;
	char	**strs;
	char	*begin;
	char	*end;

	begin = 0;
	end = 0;
	final_len = final_length(str, charset, 0, 0);
	if (!(strs = (char **)malloc((final_len + 1) * sizeof(char *))))
		return (0);
	i = 0;
	while (*str)
	{
		end = real_split(&str, charset, &begin);
		if (end)
			strs[i++] = ft_strdup(begin, end + 1);
	}
	strs[i] = 0;
	return (strs);
}
