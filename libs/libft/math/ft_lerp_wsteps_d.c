/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp_wsteps_d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:53:12 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:53:13 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Linearly interpolates a double x with discrete increments (steps).
 *
 * @param from Minimum know value of y.
 * @param to Maximum know value of y.
 * @param steps The number of discrete increments between from and to.
 * @param x The number to be linearly interpolated.
 * @return double y at x assuming a linear relation between from and to.
 */
double	ft_lerp_wsteps_d(double from, double to, double steps, double x)
{
	double	step;

	step = (to - from) / (steps - 1);
	return (from + (step * x));
}
