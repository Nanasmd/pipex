/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:50:51 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:50:52 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the absolute value of a float.
 *
 * @param number The number.
 * @return float Its absolute value.
 */
float	ft_abs_f(float number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}
