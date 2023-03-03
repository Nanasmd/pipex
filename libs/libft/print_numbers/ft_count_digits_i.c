/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_i.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:58:29 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:58:30 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts the number of digits that an int would have if printed.
 *
 * @param number The number to be counted.
 * @return unsigned int The number of chars.
 */
unsigned int	ft_count_digits_i(int number)
{
	return (ft_count_digits(number));
}
