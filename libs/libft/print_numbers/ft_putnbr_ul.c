/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:00:28 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:00:29 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes ascii representation of an unsigned long to standard out.
 *
 * @param number The number to be printed.
 */
void	ft_putnbr_ul(unsigned long number)
{
	ft_putnbr_base_ul(number, DECIMAL_BASE);
}
