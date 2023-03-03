/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_bit_endianess_ui32.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:30:31 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:30:32 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Switches the bit endianess of an unsigned 32-bit word.
 *
 * @param old The word to be switched.
 * @return uint32_t The word with switched endianess.
 */
uint32_t	ft_switch_bit_endianess_ui32(uint32_t old)
{
	uint32_t	new;
	uint32_t	temp;
	int			i;

	new = 0;
	i = 0;
	while (i < 32)
	{
		temp = (old >> i) & 1;
		temp = temp << (32 - i - 1);
		new = new | temp;
		i++;
	}
	return (new);
}
