/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ull.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:00:33 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:00:34 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes ascii representation of an unsigned long long to standard out.
 *
 * @param number The number to be printed.
 */
void	ft_putnbr_ull(unsigned long long number)
{
	ft_putnbr_base_ull(number, DECIMAL_BASE);
}
