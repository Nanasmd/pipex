/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_l.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:59:09 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:59:10 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	print_number_with_base(long number,
									const long base_length,
									const char *base)
{
	pf_handle_minus_sign_l(&number);
	if (number >= base_length)
		print_number_with_base(number / base_length, base_length, base);
	ft_putchar(base[number % base_length]);
}

/**
 * @brief Prints a long in an arbitrary base.
 *
 * @param number The number to be printed.
 * @param base A string with the characters that represent a number
 * in a counting system.
 *   - Can't have any repeating chars.
 */
void	ft_putnbr_base_l(long number, const char *base)
{
	long	base_length;

	base_length = ft_strlen(base);
	if (unless(ft_is_valid_base(base, base_length)))
		return ;
	print_number_with_base(number, base_length, base);
}
