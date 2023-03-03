/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:37 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:38 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	write_digits(char *string,
							unsigned long digit_count,
							unsigned long number,
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
 * @brief Parses a long n into an allocated string.
 *
 * @param n The long to be parsed.
 * @return char* Its string representation.
 */
char	*ft_ltoa(long n)
{
	unsigned long	digit_count;
	unsigned long	number;
	int				is_negative;
	char			*string;

	digit_count = ft_count_digits_ul(n);
	number = (unsigned long)n;
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
