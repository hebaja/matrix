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

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matriz(int x, int y)
{
	int	altura;
	int	largura;

	altura = 0;
	while (altura < y)
	{
		largura = 0;
		while (largura < x)
		{
			if (altura == 0 || altura == y - 1)
			{
				if (largura == 0)
				{
					ft_putchar('A');
				}
				else if (largura < x - 1)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar ('C');
				}
			}
			else
			{
				if (largura == 0 || largura == x -1)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar(' ');
				}
			}
			largura++;
		}
		ft_putchar('\n');
		altura++;
	}
}

int main(void)
{
	print_matriz(5, 3);
	print_matriz(5, 1);
	print_matriz(1, 1);
	print_matriz(1, 5);
	print_matriz(4, 4);
  return (0);
}
