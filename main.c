/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebatist <hebatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:36:22 by hebatist          #+#    #+#             */
/*   Updated: 2024/07/20 18:14:25 by hebatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

void	ft_putchar(char c);

int	main(void)
{
	rush(5, 3);
	ft_putchar(10);
	rush(5, 1);
	ft_putchar(10);
	rush(1, 1);
	ft_putchar(10);
	rush(1, 5);
	ft_putchar(10);
	rush(4, 4);
	ft_putchar(10);
	rush(25, 47);
	ft_putchar(10);
	rush(36, 6);
	return (0);
}
