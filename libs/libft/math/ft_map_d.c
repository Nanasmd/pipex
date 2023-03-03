/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:53:39 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:53:40 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Maps a double that varies between a range into a target range.
 *
 * @param args.x The number to be mapped to the second range.
 * @param args.from_1 The minimum of the first range.
 * @param args.to_1 The maximum of the first range.
 * @param args.from_2 The minimum of the second range.
 * @param args.to_2 The maximum of the second range.
 * @return double The mapped value from range 1 to range 2.
 */
double	ft_map_d(t_map_d args)
{
	double	mapped;

	mapped = (args.x - args.from_1)
		* (args.to_2 - args.from_2)
		/ (args.to_1 - args.from_1)
		+ args.from_2;
	return (mapped);
}
