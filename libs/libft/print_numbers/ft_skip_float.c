/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_float.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:01:03 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:01:04 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Skips '+' and '-', then skips digits, periods, digits.
 *
 * @param str The C-string to be skipped.
 * @return char* Pointer after the skipped chars.
 */
char	*ft_skip_float(char *str)
{
	while (ft_is_plus_or_minus(*str))
		str++;
	while (ft_isdigit(*str))
		str++;
	while (*str == '.')
		str++;
	while (ft_isdigit(*str))
		str++;
	return (str);
}
