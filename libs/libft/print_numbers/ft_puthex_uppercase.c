/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:59:01 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:59:02 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints an unsigned int in uppercase hexadecimal.
 *
 * @param number The number to be printed.
 */
void	ft_puthex_uppercase(unsigned int number)
{
	ft_putnbr_base_ui(number, UPPERCASE_HEX_BASE);
}
