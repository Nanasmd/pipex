/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp_precise_d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:51:47 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:48 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Linearly interpolates a double x precisely.
 *
 * @param from Minimum know value of y.
 * @param to Maximum know value of y.
 * @param x The number to be linearly interpolated.
 * @return double y at x assuming a linear relation between from and to.
 */
double	ft_lerp_precise_d(double from, double to, double x)
{
	return ((1 - x) * from + x * to);
}
