/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:35 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:36 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Scans first n bytes after s for c. Returns c's position if it finds it.
 * Returns NULL otherwise.
 *
 * @param s The initial address.
 * @param c The char being searched.
 * @param n The number of bytes searched.
 * @return void* The address where it found c or NULL.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string_cast;

	string_cast = (unsigned char *)s;
	while (n--)
	{
		if (*string_cast == (unsigned char)c)
			return (string_cast);
		string_cast++;
	}
	return (NULL);
}
