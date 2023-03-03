/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_lalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:46:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:46:46 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an allocated string with the same chars of s
 * and adds it to the lalloc.
 *
 * @param lalloc A linked list with the pointers of all allocated variables.
 * @param s The string to be duplicated.
 * @return char* The copy of the string.
 */
char	*ft_strdup_lalloc(t_list **lalloc, const char *s)
{
	char	*new_string;

	new_string = ft_strdup(s);
	ft_add_lalloc(lalloc, new_string);
	return (new_string);
}
