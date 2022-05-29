/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:05:06 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/17 21:12:57 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	if (ft_recursive_factorial(5) == 120)
		write(1, "OK", 2);
	else
		write(1, "KO", 2);
	return (0);
}
