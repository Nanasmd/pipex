/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:50:55 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:50:56 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the absolute value of an int.
 *
 * @param number The number.
 * @return int Its absolute value.
 */
int	ft_abs_i(int number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}
