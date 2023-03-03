/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:30 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:31 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	write_digits(char *string,
							unsigned int digit_count,
							unsigned int number,
							int is_negative)
{
	string[digit_count] = '\0';
	while (digit_count--)
	{
		string[digit_count] = '0' + (number % 10);
		number /= 10;
	}
	if (is_negative)
		string[0] = '-';
}

/**
 * @brief Parses a int n into an allocated string.
 *
 * @param n The int to be parsed.
 * @return char* Its string representation.
 */
char	*ft_itoa(int n)
{
	unsigned int	digit_count;
	unsigned int	number;
	unsigned int	is_negative;
	char			*string;

	digit_count = ft_count_chars_i(n);
	number = (unsigned int)n;
	is_negative = 0;
	if (n < 0)
	{
		number *= -1;
		is_negative = 1;
	}
	string = ft_salloc(sizeof(char) * (digit_count + 1));
	write_digits(string, digit_count, number, is_negative);
	return (string);
}
