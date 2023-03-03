/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_dup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:07:44 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:07:45 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Clones a NULL-terminated C-string array.
 *
 * @param clone_me The string array to be cloned.
 * @return char** The cloned array or NULL.
 */
char	**ft_strarr_dup(char **clone_me)
{
	char	**clone;
	char	**copier;

	if (clone_me == NULL)
		return (NULL);
	clone = ft_strarr_new(ft_strarr_len(clone_me));
	copier = clone;
	while (*clone_me != NULL)
	{
		*copier = ft_strdup(*clone_me);
		copier++;
		clone_me++;
	}
	*copier = NULL;
	return (clone);
}
