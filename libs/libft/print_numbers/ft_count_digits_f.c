/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_f.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:58:17 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:58:18 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	cast_parts(float number, unsigned long long *whole, float *decimal)
{
	*whole = (long long)number;
	*decimal = (number - *whole);
	if (*decimal < 0)
		*decimal *= -1;
}

/**
 * @brief Counts the number of digits that a float would have
 * if printed with an arbitrary precision.
 *
 * @param number The number to be counted.
 * @param precision The floating point number precision.
 * @return unsigned int The number of chars.
 */
unsigned int	ft_count_digits_f(float number, int precision)
{
	unsigned long long	whole;
	float				decimal;
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
