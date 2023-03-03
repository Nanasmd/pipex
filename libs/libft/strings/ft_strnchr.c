/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:27 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:11:28 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns first occurence of char c in string up to limit or NULL.
 *
 * @param s The C-string to be searched.
 * @param c	The char to search.
 * @param limit The number of bytes to search.
 * @return char* The first location of the char or NULL.
 */
char	*ft_strnchr(const char *s, int c, unsigned int limit)
{
	unsigned int	current;

	current = 0;
	while (s[current] != (char)c)
	{
		if (s[current] == '\0' || current >= limit)
			return (NULL);
		current++;
	}
	return ((char *)(s + current));
}
