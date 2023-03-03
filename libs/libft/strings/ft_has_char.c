/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:09:57 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:09:58 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Checks if the string contains the character.
 *
 * @param str The C-string to be checked.
 * @param c The character to be searched.
 * @return true The string contains the character.
 * @return false The string does not contain the character.
 */
bool	ft_has_char(char *str, char c)
{
	if (ft_strchr(str, c) == NULL)
		return (false);
	return (true);
}
