/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:54:38 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:54:39 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Calculates the power of an arbitrary int.
 *
 * @param base The number to be exponentiated.
 * @param exponent The number of times the base will be multiplied with itself.
 * @return int The power.
 */
int	ft_pow_i(int base, int exponent)
{
	int	result;

	if (exponent < 0)
		return (0);
	if (exponent == 0)
		return (1);
	result = 1;
	result = result * base * ft_pow_i(base, exponent - 1);
	return (result);
}
