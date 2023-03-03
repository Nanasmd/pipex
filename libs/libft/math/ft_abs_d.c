/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:50:47 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:50:48 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the absolute value of a double.
 *
 * @param number The number.
 * @return double Its absolute value.
 */
double	ft_abs_d(double number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}
