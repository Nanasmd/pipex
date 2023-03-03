/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:09:17 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:09:18 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Takes in a string and parses its chars into a long.
 *
 * @param str The number string to be parsed.
 * @return long The parsend number.
 */
long	ft_atol(const char *str)
{
	long	number;
	long	previous_number;
	int		sign;

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
