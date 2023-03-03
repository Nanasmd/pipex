/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handled_no_conversion.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:04:19 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:04:20 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Handles printf's empty conversion.
 *
 * @param print_control The main control struct.
 * @return true If it printed the conversion.
 * @return false If it didn't print the conversion.
 */
bool	pf_handled_no_conversion(t_printf *print_control)
{
	if (*(print_control->format) == '%')
		return (false);
	ft_putchar(*(print_control->format));
	(print_control->format)++;
	(print_control->chars_printed)++;
	return (true);
}
