/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_ld.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:51:00 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:01 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the absolute value of a long double.
 *
 * @param number The number.
 * @return long double Its absolute value.
 */
long double	ft_abs_ld(long double number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}
