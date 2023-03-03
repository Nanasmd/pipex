/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_empty_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:07 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:08 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns true if string contains only whitespace.
 *
 * @param str The C-string to be checked.
 * @return true
 * @return false
 */
bool	ft_is_empty_str(char *str)
{
	while (ft_is_whitespace(*str))
		str++;
	if (*str == '\0')
		return (true);
	return (false);
}
