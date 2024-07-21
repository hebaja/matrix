/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:18:29 by hebatist          #+#    #+#             */
/*   Updated: 2024/07/21 19:18:36 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, int y, int height, int width)
{
	if (height == 0 || height == y - 1)
	{
		if (width == 0)
			ft_putchar('A');
		else if (width < x - 1)
			ft_putchar('B');
		else
			ft_putchar ('C');
	}
	else
	{
		if (width == 0 || width == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	height;
	int	width;

	if (x < 1 || y < 1)
		return ;
	height = 0;
	while (height < y)
	{
		width = 0;
		while (width < x)
		{
			print(x, y, height, width);
			width++;
		}
		ft_putchar('\n');
		height++;
	}
}
