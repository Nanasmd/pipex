/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits_ui.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:29:34 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:29:35 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints the bits of an unsigned int.
 *
 * @param ui The unsigned int to be printed.
 */
void	ft_print_bits_ui(unsigned int ui)
{
	int	i;

	ft_putchar('|');
	i = (sizeof(int) * 8) - 1;
	while (i >= 0)
	{
		if (ui & (1u << i))
			ft_putchar('1');
		else
			ft_putchar('0');
		if (i % 8 == 0)
			ft_putchar('|');
		i--;
	}
	ft_putchar('\n');
}
