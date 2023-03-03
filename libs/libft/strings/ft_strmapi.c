/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:22 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:11:23 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns an allocated string with each char modified by f.
 *
 * @param s The C-string to be mapped.
 * @param f The callback that runs on char of the list.
 * @return char* The new mapped string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map_start;
	char	*map;

	map_start = ft_strdup(s);
	if (map_start == NULL)
		return (NULL);
	map = map_start;
	while (*map)
	{
		*map = f(map - map_start, *map);
		map++;
	}
	return (map_start);
}
