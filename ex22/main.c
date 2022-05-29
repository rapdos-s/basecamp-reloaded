/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 06:42:40 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/22 07:06:45 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_abs.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
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

void	ft_test(int nbr)
{
	ft_putstr("\nnbr = ");
	ft_putnbr(nbr);
	nbr = ABS(nbr);
	ft_putstr("\n|nbr| = ");
	ft_putnbr(nbr);
	ft_putstr("\n");
}

int	main(void)
{
	ft_test(0);
	ft_test(42);
	ft_test(-42);
	return (0);
}
