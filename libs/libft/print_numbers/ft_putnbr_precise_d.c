/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_precise_d.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:00:08 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:00:09 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	cast_parts(double n, long long *whole, double *decimal)
{
	*whole = (long long)n;
	*decimal = (n - *whole);
	if (*decimal < 0)
		*decimal *= -1;
	if (*whole < 0)
		*whole *= -1;
}

static void	print_whole(double n, long long whole)
{
	if (n < 0.0)
		ft_putchar('-');
	ft_putnbr_ll(whole);
}

static void	print_decimal(int precision, double decimal)
{
	long long	shifted;
	char		leading_zeros;

	ft_putchar('.');
	shifted = (decimal * ft_pow(10, precision));
	leading_zeros = precision - ft_count_digits_ull(shifted);
	if (leading_zeros <= 0)
		return (ft_putnbr_ll(shifted));
	while (leading_zeros)
	{
		ft_putchar('0');
		leading_zeros--;
	}
	ft_putnbr_ll(shifted);
}

/**
 * @brief Prints a double n with arbitrary precision.
 *
 * @param number The number to be printed.
 * @param precision The floating point number precision.
 */
void	ft_putnbr_precise_d(double n, int precision)
{
	long long	whole;
	double		decimal;

	if (precision < 0)
		return ;
	cast_parts(n, &whole, &decimal);
	print_whole(n, whole);
	print_decimal(precision, decimal);
}
