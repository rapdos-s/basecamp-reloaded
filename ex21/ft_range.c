/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 04:53:40 by rapdos-s          #+#    #+#             */
/*   Updated: 2022/05/25 22:42:30 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	range = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[max - min - 1] = max - 1;
		max--;
	}
	return (range);
}
