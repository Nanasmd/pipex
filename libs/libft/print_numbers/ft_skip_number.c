/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:01:25 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:01:26 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Skips '+'ses and '-'ses, then skips ASCII numbers.
 *
 * @param str The C-string to be skipped.
 * @return char* Pointer after the skipped chars.
 */
char	*ft_skip_number(char *str)
{
	while (ft_is_plus_or_minus(*str))
		str++;
	while (ft_isdigit(*str))
		str++;
	return (str);
}
