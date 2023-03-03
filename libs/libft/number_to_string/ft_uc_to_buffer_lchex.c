/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uc_to_buffer_lchex.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:57:05 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:57:06 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Parses an unsigned char
 * and writes it to a previously-allocated buffer
 * in lowercase hexadecimal.
 *
 * @param number The unsigned char to be parsed.
 * @param buffer The buffer's address.
 * @return unsigned int The number of characters written.
 */
unsigned int	ft_uc_to_buffer_lchex(unsigned char number, char *buffer)
{
	int	i;

	i = UC_LOWERCASE_HEX_SIZE;
	while (i--)
	{
		buffer[i] = LOWERCASE_HEX_BASE[number % 16];
		number /= 16;
	}
	return (UC_LOWERCASE_HEX_SIZE);
}
