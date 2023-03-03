/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:53:54 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:53:55 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the greatest of two doubles.
 *
 * @param x The first number.
 * @param y The second number.
 * @return double The greatest of the two.
 */
double	ft_max_d(double x, double y)
{
	if (x > y)
		return (x);
	return (y);
}
