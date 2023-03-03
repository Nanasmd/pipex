/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:18 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:11:19 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts how many chars string s has excluding '\0'.
 *
 * @param s The C-string to be counted.
 * @return size_t The number of charts in the string excluding '\0'.
 */
size_t	ft_strlen(const char *s)
{
	size_t	length;

	if (s == NULL)
		return (0);
	length = 0;
	while (s[length])
		length++;
	return (length);
}
