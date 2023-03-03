/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_left_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:29:54 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:29:55 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Rotates an int to the left.
 *
 * @param word The word to be rotated.
 * @param rotations The number of rotations.
 * @return int The rotated word.
 */
int	ft_rotate_left_i(int word, int rotations)
{
	const int	total_bits = sizeof(int) * 8;

	return (
		(word << rotations)
		| (word >> (total_bits - rotations))
	);
}
