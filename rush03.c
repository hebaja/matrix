/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_etapa4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert2 <probert2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:32:40 by probert2          #+#    #+#             */
/*   Updated: 2024/07/20 22:05:56 by probert2         ###   ########.fr       */
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
