/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:53:59 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:54:00 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the greatest of two ints.
 *
 * @param x The first number.
 * @param y The second number.
 * @return int The greatest of the two.
 */
int	ft_max_i(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}
