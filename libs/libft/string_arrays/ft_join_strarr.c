/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_strarr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:07:01 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:07:02 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Joins all strings of a C-string array.
 * If the array is NULL or empty returns NULL.
 *
 * @param strarr The string array to be joined.
 * @return char* The joined string or NULL.
 */
char	*ft_join_strarr(char **strarr)
{
	char	*joined;

	if (strarr == NULL)
		return (NULL);
	if (*strarr == NULL)
		return (NULL);
	joined = ft_strdup(*strarr);
	strarr++;
	while (*strarr != NULL)
	{
		joined = ft_strjoin_free(joined, *strarr);
		strarr++;
	}
	return (joined);
}
