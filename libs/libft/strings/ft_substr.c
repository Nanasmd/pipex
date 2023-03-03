/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:59 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:12:00 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates allocated string from start to len of s.
 *
 * @param s The C-string to be broken.
 * @param start The first byte of the substring.
 * @param len The length of the substring.
 * @return char* The allocated substring or NULL.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_length;
	char	*s_start;
	char	*new_string_start;
	char	*new_string;

	if (s == NULL)
		return (NULL);
	new_string_start = ft_salloc(sizeof(char) * (len + 1));
	new_string = new_string_start;
	s_length = ft_strlen(s);
	s_start = (char *)s;
	s += start;
	while ((size_t)(s - s_start) < s_length && len--)
		*new_string++ = *s++;
	*new_string = '\0';
	return (new_string_start);
}
