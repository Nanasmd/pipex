/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_left_ui32.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:30:15 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:30:16 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Rotates an unsigned 32-bit word to the left.
 *
 * @param word The word to be rotated.
 * @param rotations The number of rotations.
 * @return int The rotated word.
 */
u_int32_t	ft_rotate_left_ui32(u_int32_t word, u_int32_t rotations)
{
	const int	total_bits = 32;

	return (
		(word << rotations)
		| (word >> (total_bits - rotations))
	);
}
