/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:34:40 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/22 05:00:20 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

void	ft_putstr(char str[])
{
	int	i;

	i = 0;
	while (str[i] != 0)
		write(1, &str[i++], 1);
}

void	ft_test(char *src)
{
	char	*str;

	str = ft_strdup(src);
	ft_putstr("\nsrc = ");
	ft_putstr(src);
	ft_putstr("\nstr = ");
	ft_putstr(str);
	ft_putstr("\n");
	free(str);
}

int	main(void)
{
	ft_test("beth");
	ft_test("banana");
	ft_test("42");
	ft_test("\201");
	return (0);
}
