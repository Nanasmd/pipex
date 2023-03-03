/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_chars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:03 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:04 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Checks if the needle contains any characters of haystack.
 *
 * @param haystack The C-string to check with.
 * @param needle The C-string to be checked.
 * @return true Needle contains a character of haystack.
 * @return false Needle does not contain a character of haystack.
 */
bool	ft_has_chars(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (ft_has_char(needle, *haystack))
			return (true);
		haystack++;
	}
	return (false);
}
