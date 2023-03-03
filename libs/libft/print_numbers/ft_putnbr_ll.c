/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:00:04 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:00:05 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes ascii representation of a long long to standard out.
 *
 * @param number The number to be printed.
 */
void	ft_putnbr_ll(long long number)
{
	ft_putnbr_base_ll(number, DECIMAL_BASE);
}
