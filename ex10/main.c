/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:24:52 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/17 19:45:26 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	ft_swap(&a, &b);
	if (a == 24 && b == 42)
		write(1, "OK", 2);
	else
		write(1, "KO", 2);
}
