/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ui_to_buffer_lchex.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:57:27 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:57:28 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Parses an unsigned int
 * and writes it to a previously-allocated buffer
 * in lowercase hexadecimal.
 *
 * @param number The unsigned int to be parsed.
 * @param buffer The buffer's address.
 * @return unsigned int The number of characters written.
 */
unsigned int	ft_ui_to_buffer_lchex(unsigned int number, char *buffer)
{
	int	i;

	i = UI_LOWERCASE_HEX_SIZE;
	while (i--)
	{
		buffer[i] = LOWERCASE_HEX_BASE[number % 16];
		number /= 16;
	}
	return (UI_LOWERCASE_HEX_SIZE);
}
