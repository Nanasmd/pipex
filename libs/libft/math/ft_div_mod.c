/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:51:22 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:23 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Divides two ints with remainder.
 *
 * @param dividend The number to be divided.
 * @param divisor The divider.
 * @param result Pointer to the result.
 * @param remainder Pointer to the reamainder.
 */
void	ft_div_mod(int dividend, int divisor, int *result, int *remainder)
{
	ft_div_mod_i(dividend, divisor, result, remainder);
}
