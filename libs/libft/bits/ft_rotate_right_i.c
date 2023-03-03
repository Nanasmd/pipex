/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_right_i.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:30:20 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:30:21 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Rotates an int to the right.
 *
 * @param word The word to be rotated.
 * @param rotations The number of rotations.
 * @return int The rotated word.
 */
int	ft_rotate_right_i(int word, int rotations)
{
	const int	total_bits = sizeof(int) * 8;

	return (
		(word >> rotations)
		| (word << (total_bits - rotations))
	);
}
