/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:57:37 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:57:39 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	write_digits(char *string,
							unsigned int digit_count,
							unsigned int number)
{
	string[digit_count] = '\0';
	while (digit_count--)
	{
		string[digit_count] = '0' + (number % 10);
		number /= 10;
	}
}

/**
 * @brief Parses an unsigned int n into an allocated string.
 *
 * @param number The unsigned int to be parsed.
 * @return char* Its string representation.
 */
char	*ft_uitoa(unsigned int number)
{
	unsigned int	digit_count;
	char			*string;

	digit_count = ft_count_chars_ui(number);
	string = ft_salloc(sizeof(char) * (digit_count + 1));
	write_digits(string, digit_count, number);
	return (string);
}
