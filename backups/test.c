void	ft_putchar(char c);

int	main(void)
{
	int	lar;
	int	alt;
	int	i_lar;
	int	i_alt;

	lar = 4;
	alt = 4;
	i_lar = 0;
	i_alt = 0;
	while (i_alt < alt){
		i_lar = 0;
		while (i_lar < lar)
		{
			if (i_lar == 0 && i_alt == 0)
			{
				ft_putchar('A');
			}
			else if (i_lar == 0 || i_lar == lar - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar('C');
			}
			i_lar++;
		}
		ft_putchar(10);
		i_alt++;
	}

	return (0);
}

