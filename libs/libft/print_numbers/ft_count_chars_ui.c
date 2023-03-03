/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_chars_ui.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:58:07 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:58:08 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts the number of chars that
 * an unsigned int would have if printed.
 *
 * @param number The number to be counted.
 * @return unsigned int The number of chars.
 */
unsigned int	ft_count_chars_ui(unsigned int number)
{
	unsigned int	digit_count;

	digit_count = 1;
	number /= 10;
	while (number != 0)
	{
		digit_count++;
		number /= 10;
	}
	return (digit_count);
}
