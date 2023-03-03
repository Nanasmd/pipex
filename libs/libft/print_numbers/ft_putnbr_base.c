/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:59:31 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:59:32 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	print_number_with_base(int nb, const int base_length, char *base)
{
	long	number;

	number = nb;
	pf_handle_minus_sign_l(&number);
	if (number >= base_length)
		print_number_with_base(number / base_length, base_length, base);
	ft_putchar(base[number % base_length]);
}

/**
 * @brief Prints an int in an arbitrary base.
 *
 * @param number The number to be printed.
 * @param base A string with the characters that represent a number
 * in a counting system.
 *   - Can't have any repeating chars.
 */
void	ft_putnbr_base(int number, char *base)
{
	int	base_length;

	base_length = ft_strlen(base);
	if (!ft_is_valid_base(base, base_length))
		return ;
	print_number_with_base(number, base_length, base);
}
