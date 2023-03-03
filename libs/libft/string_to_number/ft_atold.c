/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atold.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:09:20 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:09:21 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Takes in a string and parses its chars into a long double.
 *
 * @param str The number string to be parsed.
 * @return long double The parsend number.
 */
long double	ft_atold(const char *str)
{
	long double	number;
	long double	power;
	int			sign;

	number = 0.0;
	power = 1.0;
	sign = 1;
	str = ft_skip_whitespace((char *)str);
	if (ft_is_plus_or_minus(*str))
		if (*str++ == '-')
			sign = -1;
	while (ft_isdigit(*str))
		number = number * 10.0 + (*str++ - '0');
	if (*str++ != '.')
		return (sign * number);
	while (ft_isdigit(*str))
	{
		number = number * 10.0 + (*str++ - '0');
		power *= 10.0;
	}
	return (sign * number / power);
}
