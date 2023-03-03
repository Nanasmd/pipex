/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_chars_ld.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:58:03 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:58:04 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts the number of chars that a long double would have
 * if printed with an arbitrary precision.
 *
 * @param number The number to be counted.
 * @param precision The floating point number precision.
 * @return unsigned int The number of chars.
 */
unsigned int	ft_count_chars_ld(long double number, int precision)
{
	if (number >= 0)
		return (ft_count_digits_ld(number, precision));
	return (ft_count_digits_ld(number, precision) + 1);
}
