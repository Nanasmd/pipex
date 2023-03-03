/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inspect_cstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:28:10 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:28:11 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	_print_bits_uc(unsigned char c)
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
		i--;
	}
}

/**
 * @brief Prints the bits of each char of a C-string.
 *
 * @param str The string to be printed.
 */
void	ft_inspect_cstr(char *str)
{
	while (*str != '\0')
		_print_bits_uc(*str++);
	_print_bits_uc(*str);
	ft_putchar('|');
	ft_putchar('\n');
}
