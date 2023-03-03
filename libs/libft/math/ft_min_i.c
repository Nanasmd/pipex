/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:54:33 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:54:34 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the smallest of two ints.
 *
 * @param x The first number.
 * @param y The second number.
 * @return int The smallest of the two.
 */
int	ft_min_i(int x, int y)
{
	if (x < y)
		return (x);
	return (y);
}
