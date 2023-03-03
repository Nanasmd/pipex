/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:21 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:22 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Sets memory from s to s + n to zero.
 *
 * @param s The initial memory address.
 * @param n The number of bytes to zero out.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
