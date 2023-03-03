/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:41 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:42 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an allocated string with the same chars of s.
 *
 * @param s The C-string to be duplicated.
 * @return char* The cloned C-string.
 */
char	*ft_strdup(const char *s)
{
	size_t	original_size;
	char	*new_string;

	original_size = ft_strsize(s);
	new_string = ft_salloc((original_size) * sizeof(char));
	ft_memcpy(new_string, s, original_size);
	return (new_string);
}
