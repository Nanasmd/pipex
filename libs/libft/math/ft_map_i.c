/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:53:49 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:53:50 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Maps an int that varies between a range into target range.
 *
 * @param args.x The number to be mapped to the second range.
 * @param args.from_1 The minimum of the first range.
 * @param args.to_1 The maximum of the first range.
 * @param args.from_2 The minimum of the second range.
 * @param args.to_2 The maximum of the second range.
 * @return int The mapped value from range 1 to range 2.
 */
int	ft_map_i(t_map_i args)
{
	int	mapped;

	mapped = (args.x - args.from_1)
		* (args.to_2 - args.from_2)
		/ (args.to_1 - args.from_1)
		+ args.from_2;
	return (mapped);
}
