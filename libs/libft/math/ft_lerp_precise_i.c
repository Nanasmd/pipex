/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp_precise_i.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:53:08 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:53:09 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Linearly interpolates a double x precisely.
 *
 * @param from Minimum know value of y.
 * @param to Maximum know value of y.
 * @param x The number to be linearly interpolated.
 * @return int y at x assuming a linear relation between from and to.
 */
int	ft_lerp_precise_i(int from, int to, int x)
{
	return ((1 - x) * from + x * to);
}
