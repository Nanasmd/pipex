/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handled_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:04:51 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:04:52 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	initialize_control(t_printf *print_control,
								t_handle_percent *control)
{
	control->print_me = '%';
	control->char_count = 1;
	pf_initialize_flag_control(print_control, &(control->flag_control));
}

static void	interpret_flags(t_parse_flags *flag_control)
{
	if (flag_control->is_left_justified)
		flag_control->left_padder = ' ';
}

/**
 * @brief Handles printf's %% conversion.
 *
 * @param print_control The main control struct.
 * @return true If it printed the conversion.
 * @return false If it didn't print the conversion.
 */
bool	pf_handled_percent(t_printf *print_control)
{
	static t_handle_percent		control;
	static t_parse_flags		*flag_control;

	if (print_control->conversion != '%')
		return (false);
	initialize_control(print_control, &control);
	flag_control = &(control.flag_control);
	pf_parse_flags(print_control, flag_control);
	interpret_flags(flag_control);
	pf_print_percent(print_control, &control, flag_control);
	return (true);
}
