/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:59:41 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:59:42 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a float with a default precision of 6.
 *
 * @param number The number to be printed.
 */
void	ft_putnbr_f(float number)
{
	ft_putnbr_precise_f(number, DEFAULT_PRINT_FLOAT_PRECISION);
}
