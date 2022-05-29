/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:04:39 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/18 16:09:51 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb/10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}

void	ft_putstr(char str[])
{
	int	i;

	i = 0;
	while (str[i] != 0)
		write(1, &str[i++], 1);
}

int	main(void)
{
	ft_putstr("\n\n[Teste: 0123456789]\nEsperado: 10\nRecebido: ");
	ft_putnbr(ft_strlen("0123456789"));
	ft_putstr("\n\n[Teste: ABCDEFGHIJKLMNOPQRSTUVWXYZ]\nEsperado: 26\nRecebido: ");
	ft_putnbr(ft_strlen("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	ft_putstr("\n\n[Teste: abcdefghijklmnopqrstuvwxyz]\nEsperado: 26\nRecebido: ");
	ft_putnbr(ft_strlen("abcdefghijklmnopqrstuvwxyz"));
	ft_putstr("\n\n[Teste: ()[]{}/|\\+-*<>=]\nEsperado: 15\nRecebido: ");
	ft_putnbr(ft_strlen("()[]{}/|\\+-*<>="));
	ft_putstr("\n\n[Teste: !?,.:;#$\%&@^_\"'`~]\nEsperado: 17\nRecebido: ");
	ft_putnbr(ft_strlen("!?,.:;#$\%&@^_\"'`~"));
	ft_putstr("\n");
	return (0);
}
