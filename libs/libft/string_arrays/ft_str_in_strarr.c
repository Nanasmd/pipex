/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_in_strarr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:07:14 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:07:15 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns true if needle is in NULL-terminated haystack.
 *
 * @param haystack The NULL-terminated C-string array.
 * @param needle The C-string you're looking for.
 * @return true If the string is in the array.
 * @return false If the string is not in the array.
 */
bool	ft_str_in_strarr(char **haystack, char *needle)
{
	char	*result;

	result = ft_find_in_strarr(haystack, needle);
	if (result == NULL)
		return (false);
	return (true);
}
