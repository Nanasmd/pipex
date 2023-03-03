/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:29 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:30 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Copies a C-string to an arbitrary location.
 *
 * @param dest The destination address.
 * @param src The source address.
 * @return char* The destination address.
 */
char	*ft_strcpy(char *dest, char *src)
{
	char	*initial_destination;

	initial_destination = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (initial_destination);
}
