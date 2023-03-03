/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:54:27 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:54:28 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the smallest of two doubles.
 *
 * @param x The first number.
 * @param y The second number.
 * @return double The smallest of the two.
 */
double	ft_min_d(double x, double y)
{
	if (x < y)
		return (x);
	return (y);
}
