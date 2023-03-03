/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_to_buffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:26 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:27 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	write_digits(char *string,
							unsigned int char_count,
							unsigned int number,
							int is_negative)
{
	string[char_count] = '\0';
	while (char_count--)
	{
		string[char_count] = '0' + (number % 10);
		number /= 10;
	}
	if (is_negative)
		string[0] = '-';
}

/**
 * @brief Parses an int and writes it to a previously-allocated buffer.
 *
 * @param n The int to be parsed.
 * @param buffer The buffer's address.
 * @return unsigned int The number of characters written.
 */
unsigned int	ft_i_to_buffer(int n, char *buffer)
{
	unsigned int	char_count;
	unsigned int	number;
	unsigned int	is_negative;

	char_count = ft_count_chars_i(n);
	number = (unsigned int)n;
	is_negative = 0;
	if (n < 0)
	{
		number *= -1;
		is_negative = 1;
	}
	write_digits(buffer, char_count, number, is_negative);
	return (char_count);
}
