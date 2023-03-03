/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:51:37 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:38 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Linearly interpolates a double x.
 *
 * @param from Minimum know value of y.
 * @param to Maximum know value of y.
 * @param x The number to be linearly interpolated.
 * @return double y at x assuming a linear relation between from and to.
 */
double	ft_lerp_d(double from, double to, double x)
{
	return (x * (to - from) + from);
}
