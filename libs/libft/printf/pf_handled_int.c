/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handled_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:04:11 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:04:12 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	set_print_me(t_printf *print_control, t_handle_int *control)
{
	control->print_me = va_arg(print_control->elements, int);
	control->char_count = ft_count_chars_i(control->print_me);
	control->digit_count = ft_count_digits_i(control->print_me);
	if (control->print_me < 0)
		control->is_negative = true;
}

static void	initialize_control(t_printf *print_control,
								t_handle_int *control)
{
	control->print_me = 0;
	control->digit_count = 0;
	control->char_count = 0;
	control->is_negative = false;
	control->is_zero_with_zero_precision = false;
	pf_initialize_flag_control(print_control, &(control->flag_control));
}

static void	interpret_flags(t_parse_flags *flag_control, t_handle_int *control)
{
	if (flag_control->has_precision)
		if (flag_control->precision == 0 && control->print_me == 0)
			control->is_zero_with_zero_precision = true;
}

/**
 * @brief Handles printf's %d and %i conversions.
 *
 * @param print_control The main control struct.
 * @return true If it printed the conversion.
 * @return false If it didn't print the conversion.
 */
bool	pf_handled_int(t_printf *print_control)
{
	static t_handle_int		control;
	static t_parse_flags	*flag_control;

	if (print_control->conversion != 'd' && print_control->conversion != 'i')
		return (false);
	initialize_control(print_control, &control);
	flag_control = &(control.flag_control);
	pf_parse_flags(print_control, flag_control);
	set_print_me(print_control, &control);
	interpret_flags(flag_control, &control);
	pf_print_int(print_control, &control, flag_control);
	return (true);
}
