/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:25 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:26 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Copies a C-string to an arbitrary location
 * and returns the string end's address.
 *
 * @param dest The destination address.
 * @param src The source address.
 * @return char* The end of the copied string in the destination.
 */
char	*ft_strcpy_end(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
