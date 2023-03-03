/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:00:24 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:00:25 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes ascii representation of an unsigned int to standard out.
 *
 * @param number The number to be printed.
 */
void	ft_putnbr_ui(unsigned int number)
{
	ft_putnbr_base_ui(number, DECIMAL_BASE);
}
