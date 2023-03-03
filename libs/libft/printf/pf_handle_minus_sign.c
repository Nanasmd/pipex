/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handle_minus_sign.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:03:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:03:43 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief If a long is negative, prints the minus sign and flips it.
 *
 * @param number_pointer Address of the number.
 */
void	pf_handle_minus_sign_l(long *number_pointer)
{
	if (*number_pointer < 0)
	{
		ft_putchar('-');
		*number_pointer *= -1;
	}
}

/**
 * @brief If a long long is negative, prints the minus sign and flips it.
 *
 * @param number_pointer Address of the number.
 */
void	pf_handle_minus_sign_ll(long long *number_pointer)
{
	if (*number_pointer < 0)
	{
		ft_putchar('-');
		*number_pointer *= -1;
	}
}

/**
 * @brief If a float is negative, prints the minus sign and flips it.
 *
 * @param number_pointer Address of the number.
 */
void	pf_handle_minus_sign_f(float *number_pointer)
{
	if (*number_pointer < 0)
	{
		ft_putchar('-');
		*number_pointer *= -1;
	}
}

/**
 * @brief If a double is negative, prints the minus sign and flips it.
 *
 * @param number_pointer Address of the number.
 */
void	pf_handle_minus_sign_d(double *number_pointer)
{
	if (*number_pointer < 0)
	{
		ft_putchar('-');
		*number_pointer *= -1;
	}
}

/**
 * @brief If a long double is negative, prints the minus sign and flips it.
 *
 * @param number_pointer Address of the number.
 */
void	pf_handle_minus_sign_ld(long double *number_pointer)
{
	if (*number_pointer < 0)
	{
		ft_putchar('-');
		*number_pointer *= -1;
	}
}
