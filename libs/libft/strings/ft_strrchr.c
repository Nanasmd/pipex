/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:11:46 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns last occurence of char c in string or NULL.
 *
 * @param s The C-string to be searched.
 * @param c	The char to search.
 * @return char* The last location of the char or NULL.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*s_end;

	s_end = ft_strchr(s, '\0');
	while (*s_end != (char)c)
		if (s_end-- == s)
			return (NULL);
	return ((char *)s_end);
}
