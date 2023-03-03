/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:51:11 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:12 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns x if it's value lies between min and max.
 * Otherwise, it returns the closest min or max closest to x.
 *
 * @param x The number to be clamped.
 * @param min The clamp minimum.
 * @param max The clamp maximum.
 * @return double The clamped value between min and max.
 */
double	ft_clamp_d(double x, double min, double max)
{
	if (x < min)
		return (min);
	if (x > max)
		return (max);
	return (x);
}
