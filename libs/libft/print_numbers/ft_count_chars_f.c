/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_chars_f.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:57:54 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:57:55 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts the number of chars that a float would have
 * if printed with an arbitrary precision.
 *
 * @param number The number to be counted.
 * @param precision The floating point number precision.
 * @return unsigned int The number of chars.
 */
unsigned int	ft_count_chars_f(float number, int precision)
{
	if (number >= 0)
		return (ft_count_digits_f(number, precision));
	return (ft_count_digits_f(number, precision) + 1);
}
