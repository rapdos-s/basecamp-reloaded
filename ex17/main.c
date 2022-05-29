/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:13:21 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/18 16:17:22 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
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
		write (1, "-", 1);
		n_unsigned = -nb;
	}
	else
		n_unsigned = nb;
	if (n_unsigned >= 10)
		ft_putnbr(n_unsigned / 10);
	n_unsigned = n_unsigned % 10 + '0';
	write (1, &n_unsigned, 1);
}

void	ft_test(char *str1, char *str2)
{
	int	cmp;

	cmp = 0;
	ft_putstr("\nstr1 = ");
	ft_putstr(str1);
	ft_putstr("\nstr2 = ");
	ft_putstr(str2);
	ft_putstr("\nstrcmp:    ");
	cmp = strcmp (str1, str2);
	ft_putnbr(cmp);
	ft_putstr("\nft_strcmp: ");
	cmp = ft_strcmp (str1, str2);
	ft_putnbr(cmp);
	ft_putstr("\n");
}

int	main(void)
{
	ft_test("ABC", "AB");
	ft_test("ABA", "ABZ");
	ft_test("ABJ", "ABC");
	ft_test("\201", "A");
	return (0);
}
