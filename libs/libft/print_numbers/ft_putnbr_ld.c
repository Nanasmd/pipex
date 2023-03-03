/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ld.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:59:58 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:59:59 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a long double with a default precision of 6.
 *
 * @param number The number to be printed.
 */
void	ft_putnbr_ld(long double number)
{
	ft_putnbr_precise_ld(number, DEFAULT_PRINT_FLOAT_PRECISION);
}
