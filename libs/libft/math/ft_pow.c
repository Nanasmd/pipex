/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:54:49 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:54:50 by nasamadi         ###   ########.fr       */
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
int	ft_pow(int base, int exponent)
{
	return (ft_pow_i(base, exponent));
}
