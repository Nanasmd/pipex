/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_in_strarr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:06:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:06:54 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the string in NULL-terminated haystack that matches needle
 * or NULL.
 *
 * @param haystack The NULL-terminated C-string array.
 * @param needle The C-string you're looking for.
 * @return char* The C-string in the array or NULL.
 */
char	*ft_find_in_strarr(char **haystack, char *needle)
{
	while (*haystack != NULL)
	{
		if (ft_streq(needle, *haystack))
			return (*haystack);
		haystack++;
	}
	return (NULL);
}
