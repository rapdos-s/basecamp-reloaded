/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 04:53:35 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/22 06:38:14 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

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

void	ft_test(int min, int max)
{
	int	*range;
	int	i;

	range = ft_range(min, max);
	i = min;
	ft_putstr("\nmin = ");
	ft_putnbr(min);
	ft_putstr("\nmax = ");
	ft_putnbr(max);
	ft_putstr("\nrange = {");
	while (i < max)
	{
		ft_putnbr(range[i - min]);
		ft_putstr(", ");
		i++;
	}
	ft_putnbr(range[i - min]);
	ft_putstr("}");
	ft_putstr("\n");
	free(range);
}

int	main(void)
{
	ft_test(1, 1);
	ft_test(-10, -1);
	ft_test(10, -10);
	ft_test(-2147483648, -2147483645);
	ft_test(2147483645, 2147483647);
	return (0);
}
