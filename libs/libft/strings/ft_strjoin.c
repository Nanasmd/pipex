/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:06 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:11:07 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an allocated string joining s1 with s2.
 *
 * @param s1  The first C-string to be joined.
 * @param s2  The second C-string to be joined.
 * @return char* The joined C-string.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	size_t	s1_size;
	char	*new_string;

	s1_size = ft_strsize(s1);
	total_size = s1_size + ft_strlen(s2);
	new_string = ft_salloc(total_size * sizeof(char));
	ft_strlcpy(new_string, s1, s1_size);
	ft_strlcat(new_string, s2, total_size);
	return (new_string);
}
