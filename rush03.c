/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:51:22 by hebatist          #+#    #+#             */
/*   Updated: 2024/07/20 16:51:43 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_matrix(int x, int y, char matrix[x][y])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < x)
	{
		col = 0;
		while (col < y)
		{
			ft_putchar(matrix[row][col]);
			col++;
		}
		ft_putchar(10);
		row++;
	}
}

void	populate_matrix(int x, int y, char matrix[x][y])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < x)
	{
		col = 0;
		while (col < y)
		{
			if ((row == 0 && col == 0) || (row == x - 1 && col == 0))
				matrix[row][col] = 'A';
			else if ((row == 0 && col == y - 1) || \
				(row == x - 1 && col == y - 1))
				matrix[row][col] = 'C';
			else if (col != 0 && col != y - 1 && \
				row != 0 && row != x - 1)
				matrix[row][col] = ' ';
			else
				matrix[row][col] = 'B';
			col++;
		}
		row++;
	}
}

void	rush(int x, int y)
{
	char	matrix[][];
	int		size_row;
	int		size_col;

	size_row = y;
	size_col = x;

	matrix = {}{};
	populate_matrix(size_row, size_col, matrix);
	print_matrix(size_row, size_col, matrix);
}
