/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits_ull.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:29:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:29:46 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints the bits of an unsigned long long.
 *
 * @param ull The unsigned long long to be printed.
 */
void	ft_print_bits_ull(unsigned long long ull)
{
	int	i;

	ft_putchar('|');
	i = (sizeof(long long) * 8) - 1;
	while (i >= 0)
	{
		if (ull & (1u << i))
			ft_putchar('1');
		else
			ft_putchar('0');
		if (i % 8 == 0)
			ft_putchar('|');
		i--;
	}
	ft_putchar('\n');
}
