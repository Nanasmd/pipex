/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits_uc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:29:22 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:29:23 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints the bits of an unsigned char.
 *
 * @param c The char to be printed
 */
void	ft_print_bits_uc(unsigned char c)
{
	int	i;

	ft_putchar('|');
	i = (sizeof(char) * 8) - 1;
	while (i >= 0)
	{
		if (c & (1u << i))
			ft_putchar('1');
		else
			ft_putchar('0');
		if (i % 8 == 0)
			ft_putchar('|');
		i--;
	}
	ft_putchar('\n');
}
