/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_size_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:10 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:11 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief WARNING: NOT TESTED!
 * Apends two non C-string in a newly-allocated string.
 *
 * @param s1 The first C-string.
 * @param s1_size The first C-string's size.
 * @param s2 The second C-string.
 * @param s2_size The second C-string's size.
 * @return char* The allocated joined string.
 */
char	*ft_join_size_size(char *s1, size_t s1_size, char *s2, size_t s2_size)
{
	char	*new;
	size_t	new_length;

	new_length = s1_size + s2_size + 1;
	new = ft_salloc(new_length);
	ft_memcpy(new, s1, s1_size - 1);
	ft_memcpy(new + s1_size, s2, s2_size);
	new[new_length + 1] = '\0';
	return (new);
}
