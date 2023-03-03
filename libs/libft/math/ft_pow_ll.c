/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_ll.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:54:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:54:46 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Calculates the power of an arbitrary long long.
 *
 * @param base The number to be exponentiated.
 * @param exponent The number of times the base will be multiplied with itself.
 * @return long long The power.
 */
long long	ft_pow_ll(long long base, int exponent)
{
	long long	result;

	if (exponent < 0)
		return (0);
	if (exponent == 0)
		return (1);
	result = 1;
	result = result * base * ft_pow_ll(base, exponent - 1);
	return (result);
}
