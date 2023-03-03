/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_streq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:46 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief If s1 and s2 are equal returns true; else returns false.
 * NULL pointers return false unless s1 and s2 are NULL.
 *
 * @param s1 The first C-string.
 * @param s2 The second C-string.
 * @return true If s1 contains the same characters as s2.
 * @return false If s1 does not contain the same characters as s2.
 */
bool	ft_streq(char *s1, char *s2)
{
	if (s1 == s2)
		return (true);
	if (s1 == NULL || s2 == NULL)
		return (false);
	while (*s1 || *s2)
		if (*s1++ != *s2++)
			return (false);
	return (true);
}
