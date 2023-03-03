/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:39 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:40 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Compares the first n bytes of s1 with the first n bytes of s2.
 * If any one byte is different, returns *s1 - *s2.
 *
 * @param s1 The first address.
 * @param s2 The second address.
 * @param n The number of bytes to compare.
 * @return int The difference between the chars or zero.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*first_cast;
	unsigned char	*second_cast;

	first_cast = (unsigned char *)s1;
	second_cast = (unsigned char *)s2;
	while (n--)
	{
		if (*first_cast != *second_cast)
			return (*first_cast - *second_cast);
		first_cast++;
		second_cast++;
	}
	return (0);
}
