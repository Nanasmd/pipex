/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:06:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:06:46 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Decides if a char is a flag.
 *
 * @param current_char
 * @return true If it printed the conversion.
 * @return false If it didn't print the conversion.
 */
static bool	is_a_flag(char current_char)
{
	if (current_char == '.')
		return (true);
	if (current_char == '-')
		return (true);
	if (current_char == '*')
		return (true);
	if (ft_isdigit(current_char))
		return (true);
	return (false);
}

/**
 * @brief Skips flags and finds the next conversion.
 *
 * @param print_control The main control struct.
 */
static void	find_current_conversion_position(t_printf *print_control)
{
	int	conversion_position;

	(print_control->format)++;
	conversion_position = 0;
	while (is_a_flag((print_control->format)[conversion_position]) &&
			(print_control->format)[conversion_position] != '\0')
		conversion_position++;
	print_control->conversion_position = conversion_position;
	print_control->conversion = (print_control->format)[conversion_position];
}

/**
 * @brief Traverses format string
 * while calling the appropiate conversion handlers.
 *
 * @param print_control The main control struct.
 */
void	pf_vprintf(t_printf *print_control)
{
	while (*(print_control->format) != '\0')
	{
		if (pf_handled_no_conversion(print_control))
			continue ;
		find_current_conversion_position(print_control);
		if (pf_handled_percent(print_control))
			continue ;
		if (pf_handled_c(print_control))
			continue ;
		if (pf_handled_s(print_control))
			continue ;
		if (pf_handled_int(print_control))
			continue ;
		if (pf_handled_u(print_control))
			continue ;
		if (pf_handled_p(print_control))
			continue ;
		if (pf_handled_hex(print_control))
			continue ;
		if (pf_handled_lf(print_control))
			continue ;
		if (pf_handled_f(print_control))
			continue ;
	}
}
