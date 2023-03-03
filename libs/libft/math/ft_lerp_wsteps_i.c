/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp_wsteps_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:53:18 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:53:19 by nasamadi         ###   ########.fr       */
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
 * @return int y at x assuming a linear relation between from and to.
 */
int	ft_lerp_wsteps_i(int from, int to, int steps, int x)
{
	int	step;

	step = (to - from) / (steps - 1);
	return (from + (step * x));
}
