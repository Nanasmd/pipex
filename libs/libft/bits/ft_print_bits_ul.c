/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits_ul.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:29:39 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:29:40 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints the bits of an unsigned long.
 *
 * @param ul The unsigned long to be printed.
 */
void	ft_print_bits_ul(unsigned long ul)
{
	int	i;

	ft_putchar('|');
	i = (sizeof(long) * 8) - 1;
	while (i >= 0)
	{
		if (ul & (1u << i))
			ft_putchar('1');
		else
			ft_putchar('0');
		if (i % 8 == 0)
			ft_putchar('|');
		i--;
	}
	ft_putchar('\n');
}
