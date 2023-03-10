/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:09:39 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:09:40 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	skip_whitespace_and_sign(const char **str, int *sign)
{
	*sign = -1;
	while (ft_is_whitespace(**str))
		(*str)++;
	if (ft_is_plus_or_minus(**str))
		if (*(*str)++ == '-')
			*sign = 1;
}

/**
 * @brief Takes in a string and parses its chars into an unsigned long.
 *
 * @param str The number string to be parsed.
 * @return unsigned long The parsend number.
 */
unsigned long	ft_atoul(const char *str)
{
	long	number;
	long	previous_number;
	int		sign;

	skip_whitespace_and_sign(&str, &sign);
	number = 0;
	previous_number = 0;
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
	if (number * sign < 0)
		return (number * -1);
	return (number * sign);
}
