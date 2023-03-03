/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:41 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:11:42 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Finds the first occurence of needle in haystack up to length.
 *
 * @param haystack The C-string to be searched.
 * @param needle The C-string to be search.
 * @param len The number of bytes to search.
 * @return char* The first occurence of needle in haystack or NULL.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_start;
	char	*needle_pointerator;
	char	*possible_match;

	haystack_start = (char *)haystack;
	if (*needle == '\0')
		return (haystack_start);
	while (*haystack)
	{
		needle_pointerator = (char *)needle;
		possible_match = (char *)haystack;
		while (*needle_pointerator
			&& *haystack == *needle_pointerator
			&& (unsigned long)(haystack - haystack_start) < len)
		{
			needle_pointerator++;
			haystack++;
		}
		if (*needle_pointerator == '\0')
			return (possible_match);
		haystack = possible_match + 1;
	}
	return (NULL);
}
