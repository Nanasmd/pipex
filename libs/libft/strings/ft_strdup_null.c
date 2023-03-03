/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:37 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:38 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an allocated string with the same chars of str.
 * Returns NULL if s is NULL.
 *
 * @param str The C-string to be duplicated.
 * @return char* The cloned C-string or NULL.
 */
char	*ft_strdup_null(const char *str)
{
	size_t	original_size;
	char	*new_string;

	if (str == NULL)
		return (NULL);
	original_size = ft_strsize(str);
	new_string = ft_salloc((original_size) * sizeof(char));
	ft_memcpy(new_string, str, original_size);
	return (new_string);
}
