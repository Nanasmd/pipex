/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_byte_endianess_ui32.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:31:19 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:31:20 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Switches the byte endianess of an unsigned 32-bit word.
 *
 * @param old The word to be switched.
 * @return uint32_t The word with switched endianess.
 */
uint32_t	ft_switch_byte_endianess_ui32(uint32_t old)
{
	uint32_t	a;
	uint32_t	b;
	uint32_t	c;
	uint32_t	d;

	a = (old >> 24) & 0x00000FF;
	b = (old >> 8) & 0x0000FF00;
	c = (old << 8) & 0x00FF0000;
	d = (old << 24) & 0xFF000000;
	return (a | b | c | d);
}
