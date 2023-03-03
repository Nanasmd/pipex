/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:51:15 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:16 by nasamadi         ###   ########.fr       */
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
 * @return int The clamped value between min and max.
 */
int	ft_clamp_i(int x, int min, int max)
{
	if (x < min)
		return (min);
	if (x > max)
		return (max);
	return (x);
}
