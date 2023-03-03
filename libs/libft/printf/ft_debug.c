/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:03:35 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:03:36 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Behaves exactly like printf
 * but with a "DEBUG: " suffix and an endline.
 *
 * @param format The printf format with conversions and flags.
 * @param ... The variables to be inserted in the format string.
 */
void	ft_debug(const char *format, ...)
{
	static t_printf	print_control;

	ft_yellowb(DEBUG_SUFFIX);
	pf_initialize_print_control(&print_control, format);
	va_start(print_control.elements, format);
	pf_vprintf(&print_control);
	va_end(print_control.elements);
	ft_endl();
}
