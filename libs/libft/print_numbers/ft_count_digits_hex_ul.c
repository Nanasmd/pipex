/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_hex_ul.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:58:24 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:58:25 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts the number of digits
 * that a hex unsigned long would have if printed.
 *
 * @param number The number to be counted.
 * @return unsigned int The number of chars.
 */
unsigned int	ft_count_digits_hex_ul(unsigned long number)
{
	int	digit_count;

	digit_count = 1;
	number /= 16;
	while (number != 0)
	{
		digit_count++;
		number /= 16;
	}
	return (digit_count);
}
