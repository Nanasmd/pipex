/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:52 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:53 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Set the memory from s to s + n to an unsigned char c.
 *
 * @param s The initial memory address.
 * @param c The char to write on each byte.
 * @param n The number of bytes to write.
 * @return void* The initial memory address (s).
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointerator;
	unsigned char	casted_char;

	pointerator = s;
	casted_char = (unsigned char)c;
	while (n--)
	{
		*pointerator = casted_char;
		pointerator++;
	}
	return (s);
}
