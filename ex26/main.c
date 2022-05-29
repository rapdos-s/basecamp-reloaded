/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:03:11 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/22 23:31:43 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_if(char **tab, int (*f)(char*));

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

int	ft_beth(char *str)
{
	if (str[1] != 'b')
		return (0);
	return (1);
}

int	main(void)
{
	char	*tab[4];

	tab[0] = "beth";
	tab[1] = "b";
	tab[2] = "alley";
	tab[3] = "mario";
	ft_putstr("\nbeths = ");
	ft_putnbr(ft_count_if(tab, &ft_beth));
	return (0);
}
