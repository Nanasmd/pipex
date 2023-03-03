/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:09:52 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:09:53 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static bool	is_valid_string(char *str)
{
	if (ft_strlen(str) > UINT_STRING_MAX_LENGTH)
		return (false);
	if (ft_is_plus_or_minus(*str))
		str++;
	if (!ft_isdigit(*str))
		return (false);
	while (ft_isdigit(*str))
		str++;
	if (*str != '\0')
		return (false);
	return (true);
}

/**
 * @brief Returns true if the string represents a valid unsigned int.
 *
 * @param str The number string to be checked.
 * @return true If number string is a valid unsigned int.
 * @return false If number string is not a valid unsigned int.
 */
bool	ft_str_is_uint(char *str)
{
	long	number;

	if (!is_valid_string(str))
		return (false);
	number = ft_atol(str);
	if (number > UINT_MAX)
		return (false);
	if (number < 0)
		return (false);
	return (true);
}
