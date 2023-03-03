/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:08:51 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:08:52 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Allocates a string array of size = (length + 1)
 * full of NULL pointers.
 *
 * @param length The number of strings in the array.
 * @return char** The allocated string array.
 */
char	**ft_strarr_new(size_t length)
{
	char	**strarr;

	strarr = ft_scalloc(sizeof(char **), (length + 1));
	return (strarr);
}
