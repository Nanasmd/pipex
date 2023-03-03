/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_ull.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:58:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:58:46 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts the number of digits that
 * an unsigned long long would have if printed.
 *
 * @param number The number to be counted.
 * @return unsigned int The number of chars.
 */
unsigned int	ft_count_digits_ull(unsigned long long number)
{
	int	digit_count;

	digit_count = 1;
	number /= 10;
	while (number != 0)
	{
		digit_count++;
		number /= 10;
	}
	return (digit_count);
}
