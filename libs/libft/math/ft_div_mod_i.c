/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:51:19 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:20 by nasamadi         ###   ########.fr       */
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
void	ft_div_mod_i(int dividend, int divisor, int *result, int *remainder)
{
	if (divisor == 0)
		return ;
	*result = dividend / divisor;
	*remainder = dividend % divisor;
}
