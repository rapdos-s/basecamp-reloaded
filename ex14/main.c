/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:14:28 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/20 21:06:52 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char str[])
{
	int	i;

	i = 0;
	while (str[i] != 0)
		write(1, &str[i++], 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n_unsigned;

	if (nb < 0)
	{
		ft_putchar('-');
		n_unsigned = -nb;
	}
	else
		n_unsigned = nb;
	if (n_unsigned >= 10)
		ft_putnbr(n_unsigned / 10);
	ft_putchar (n_unsigned % 10 + '0');
}

void	ft_test(int nb)
{
	ft_putstr ("[");
	ft_putnbr (nb);
	ft_putstr ("]\t");
	nb = ft_sqrt(nb);
	ft_putnbr (nb);
	ft_putstr ("\n");
}

int	main(void)
{
	int	nb;

	nb = 5;
	ft_putstr ("[nb]\tres\n");
	while (nb <= 10)
	{
		ft_test(nb);
		nb++;
	}
	ft_test(0);
	ft_test(-2147483648);
	ft_test(2147395600);
	ft_test(2147483647);
	ft_test(8);
	return (0);
}
