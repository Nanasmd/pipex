/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_ld.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:58:33 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:58:34 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	cast_parts(long double number, unsigned long long *whole,
		long double *decimal)
{
	*whole = (long long)number;
	*decimal = (number - *whole);
	if (*decimal < 0)
		*decimal *= -1;
}

/**
 * @brief Counts the number of digits that a long double would have
 * if printed with an arbitrary precision.
 *
 * @param number The number to be counted.
 * @param precision The floating point number precision.
 * @return unsigned int The number of chars.
 */
unsigned int	ft_count_digits_ld(long double number, int precision)
{
	unsigned long long	whole;
	long double			decimal;
	unsigned int		digits;

	if (precision < 0.0)
		return (0);
	if (number < 0.0)
		number *= -1;
	digits = 0;
	cast_parts(number, &whole, &decimal);
	digits += ft_count_digits_ull(whole);
	digits += precision + 1;
	return (digits);
}
