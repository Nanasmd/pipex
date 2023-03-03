/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:09:12 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:09:13 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Takes in a string and parses its chars into an integer.
 *
 * @param str The number string to be parsed.
 * @return int The parsend number.
 */
int	ft_atoi(const char *str)
{
	int	number;
	int	previous_number;
	int	sign;

	number = 0;
	sign = -1;
	previous_number = 0;
	str = ft_skip_whitespace((char *)str);
	if (ft_is_plus_or_minus(*str))
		if (*str++ == '-')
			sign = 1;
	while (ft_isdigit(*str))
	{
		number *= 10;
		number -= (*str++ - '0');
		if (previous_number < number)
		{
			if (sign < 0)
				return (-1);
			return (0);
		}
		previous_number = number;
	}
	return (number * sign);
}
