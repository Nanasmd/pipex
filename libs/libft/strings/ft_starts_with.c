/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_starts_with.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:17 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:18 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns true if string stats with prefix.
 *
 * @param str The C-string to be checked.
 * @param prefix The prefix to check.
 * @return true If str starts with prefix.
 * @return false If str does not start with prefix.
 */
bool	ft_starts_with(char *string, char *prefix)
{
	char	*test;

	test = ft_strnstr(string, prefix, ft_strlen(prefix));
	if (test != NULL)
		return (true);
	return (false);
}
