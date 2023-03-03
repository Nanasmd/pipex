/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:59:05 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:59:06 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints an int in an arbitrary base.
 *
 * @param number The number to be printed.
 * @param base A string with the characters that represent a number
 * in a counting system.
 *   - Can't have any repeating chars.
 */
void	ft_putnbr_base_i(int number, char *base)
{
	ft_putnbr_base(number, base);
}
