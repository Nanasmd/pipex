/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_dup_shallow.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:07:35 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:07:36 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a shallow copy of a NULL-terminated C-string array.
 *
 * @param copy_me The string array to be copied.
 * @return char** The cloned array or NULL.
 */
char	**ft_strarr_dup_shallow(char **copy_me)
{
	char	**clone;
	char	**copier;

	if (copy_me == NULL)
		return (NULL);
	clone = ft_strarr_new(ft_strarr_len(copy_me));
	copier = clone;
	while (*copy_me != NULL)
	{
		*copier = *copy_me;
		copier++;
		copy_me++;
	}
	*copier = NULL;
	return (clone);
}
