/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:48:38 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/19 19:44:53 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb);

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
	ft_putstr ("] = ");
	nb = ft_iterative_factorial(nb);
	ft_putnbr (nb);
	ft_putstr ("\n");
}

int	main(void)
{
	int	i;
	int	final;

	i = -10;
	final = 15;
	while (i <= final)
		ft_test(i++);
	return (0);
}
