/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_clamped_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:53:24 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:53:25 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Maps a double that varies between a range into a target range.
 * If the result lies outside the target
 * it returns the closest limit, min or max.
 *
 * @param args.x The number to be mapped to the second range.
 * @param args.from_1 The minimum of the first range.
 * @param args.to_1 The maximum of the first range.
 * @param args.from_2 The minimum of the second range.
 * @param args.to_2 The maximum of the second range.
 * @return int The mapped value from range 1 to range 2.
 */
int	ft_map_clamped_i(t_map_i args)
{
	int	mapped;

	mapped = ft_map_i(args);
	if (args.from_2 < args.to_2)
		return (ft_clamp_i(mapped, args.from_2, args.to_2));
	return (ft_clamp_i(mapped, args.to_2, args.from_2));
}
