/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:00:38 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:00:39 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes ascii representation of an int to standard out.
 *
 * @param number The number to be printed.
 */
void	ft_putnbr(int number)
{
	ft_putnbr_base(number, DECIMAL_BASE);
}
