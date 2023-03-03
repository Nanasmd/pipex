/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:59:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:59:54 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes ascii representation of a long to standard out.
 *
 * @param number The number to be printed.
 */
void	ft_putnbr_l(long number)
{
	ft_putnbr_base_l(number, DECIMAL_BASE);
}
