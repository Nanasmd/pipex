/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:58:57 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:58:58 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints an unsigned int in lowercase hexadecimal.
 *
 * @param number The number to be printed.
 */
void	ft_puthex_lowercase(unsigned int number)
{
	ft_putnbr_base_ui(number, LOWERCASE_HEX_BASE);
}
