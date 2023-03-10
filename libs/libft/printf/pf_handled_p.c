/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handled_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:04:22 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:04:23 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	set_print_me(t_printf *print_control, t_handle_p *control)
{
	control->print_me = va_arg(print_control->elements, unsigned long);
	control->digit_count = ft_count_digits_hex_ul(control->print_me) + 2;
}

static void	initialize_control(t_printf *print_control,
								t_handle_p *control)
{
	control->print_me = 0;
	control->digit_count = 0;
	control->is_zero_with_zero_precision = false;
	pf_initialize_flag_control(print_control, &(control->flag_control));
}

static void	interpret_flags(t_parse_flags *flag_control, t_handle_p *control)
{
	if (flag_control->has_precision)
		if (flag_control->precision == 0 && control->print_me == 0)
			control->is_zero_with_zero_precision = true;
}

/**
 * @brief Handles printf's %p conversion.
 *
 * @param print_control The main control struct.
 * @return true If it printed the conversion.
 * @return false If it didn't print the conversion.
 */
bool	pf_handled_p(t_printf *print_control)
{
	static t_handle_p		control;
	static t_parse_flags	*flag_control;

	if (print_control->conversion != 'p')
		return (false);
	initialize_control(print_control, &control);
	flag_control = &(control.flag_control);
	pf_parse_flags(print_control, flag_control);
	set_print_me(print_control, &control);
	interpret_flags(flag_control, &control);
	pf_printf_p(print_control, &control, flag_control);
	return (true);
}
