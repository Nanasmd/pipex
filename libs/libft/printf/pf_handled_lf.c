/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_handled_lf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:04:15 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:04:16 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	set_print_me(t_printf *pf_ctl, t_handle_lf *control)
{
	control->print_me = va_arg(pf_ctl->elements, long double);
	if (control->print_me < 0)
		control->is_negative = true;
}

static void	initialize_control(t_printf *pf_ctl,
								t_handle_lf *control)
{
	control->print_me = 0;
	control->digit_count = 0;
	control->char_count = 0;
	control->is_negative = false;
	control->is_zero_with_zero_precision = false;
	pf_initialize_flag_control(pf_ctl, &(control->flag_control));
}

static void	interpret_flags(t_parse_flags *flag_control,
	t_handle_lf *control)
{
	if (flag_control->has_precision)
		if (flag_control->precision == 0 && control->print_me == 0)
			control->is_zero_with_zero_precision = true;
	if (unless(flag_control->has_precision))
		flag_control->precision = 6;
	control->char_count = ft_count_chars_ld(control->print_me,
			flag_control->precision);
	control->digit_count = ft_count_digits_ld(control->print_me,
			flag_control->precision);
}

/**
 * @brief Handles printf's %Lf conversion.
 *
 * @param pf_ctl The main control struct.
 * @return true If it printed the conversion.
 * @return false If it didn't print the conversion.
 */
bool	pf_handled_lf(t_printf *pf_ctl)
{
	static t_handle_lf		control;
	static t_parse_flags	*flag_control;

	if (pf_ctl->conversion != 'L'
		&& (pf_ctl->format)[pf_ctl->conversion_position + 1] != 'f')
		return (false);
	initialize_control(pf_ctl, &control);
	flag_control = &(control.flag_control);
	pf_parse_flags(pf_ctl, flag_control);
	pf_ctl->format++;
	set_print_me(pf_ctl, &control);
	interpret_flags(flag_control, &control);
	pf_print_lf(pf_ctl, &control, flag_control);
	return (true);
}
