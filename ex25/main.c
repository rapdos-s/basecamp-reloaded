/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:26:04 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/22 22:59:14 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

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

int	main(void)
{
	int	tab[10];
	int	i;
	int	length;

	i = 0;
	length = 10;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	ft_putstr("\nlength = ");
	ft_putnbr(length);
	ft_putstr("\nft = &ft_putnbr");
	ft_putstr("\n");
	ft_foreach(tab, length, &ft_putnbr);
	return (0);
}
