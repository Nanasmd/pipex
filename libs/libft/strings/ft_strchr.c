/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:21 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:22 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns first occurence of char c in string or NULL.
 *
 * @param s The C-string to be searched.
 * @param c	The char to search.
 * @return char* The first location of the char or NULL.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (*s++ == '\0')
			return (NULL);
	return ((char *)s);
}
