/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:59:36 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:59:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a double with a default precision of 6.
 *
 * @param number The number to be printed.
 */
void	ft_putnbr_d(double number)
{
	ft_putnbr_precise_d(number, DEFAULT_PRINT_FLOAT_PRECISION);
}
