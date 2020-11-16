/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaranti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:53:32 by etaranti          #+#    #+#             */
/*   Updated: 2020/11/03 10:12:44 by etaranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_queens(int *queens)
{
	int i;

	i = 0;
	while (i < 10)
		ft_putchar(queens[i++] + '0');
	ft_putchar('\n');
}

int		right_position(int riga, int col, int *queens)
{
	int i_riga;
	int abs_riga;
	int abs_col;

	i_riga = 0;
	while (i_riga < riga)
	{
		if (queens[i_riga] == col)
			return (0);
		if (i_riga - riga < 0)
			abs_riga = riga - i_riga;
		else
			abs_riga = i_riga - riga;
		if (col - queens[i_riga] < 0)
			abs_col = queens[i_riga] - col;
		else
			abs_col = col - queens[i_riga];
		if (abs_col == abs_riga)
			return (0);
		i_riga++;
	}
	return (1);
}

void	solve_queens(int *queens, int riga, int *count)
{
	int col;

	col = 0;
	if (riga > 9)
	{
		print_queens(queens);
		(*count)++;
		return ;
	}
	while (col < 10)
	{
		if (right_position(riga, col, queens))
		{
			queens[riga] = col;
			solve_queens(queens, riga + 1, count);
		}
		col++;
	}
	return ;
}

int		ft_ten_queens_puzzle(void)
{
	int queens[10];
	int count;
	int i;

	i = 0;
	count = 0;
	while (i < 10)
		queens[i++] = 0;
	solve_queens(queens, 0, &count);
	return (count);
}
#include<stdio.h>
int main()
{
	printf("%d", ft_ten_queens_puzzle());
}
