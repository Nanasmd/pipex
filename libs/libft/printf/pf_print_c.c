/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:06:03 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:06:04 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	handle_padding(t_printf *print_control,
							t_handle_c *control,
							t_parse_flags *flag_control)
{
	int	padding;

	padding = flag_control->minimum_width - control->char_count;
	if (padding <= 0)
		return ;
	(print_control->chars_printed) += padding;
	while (padding--)
		ft_putchar(flag_control->left_padder);
}

/**
 * @brief Prints the formatted conversion %c.
 *
 * @param print_control The main control struct.
 * @param control The conversion control struct.
 * @param flag_control The flags control struct.
 */
void	pf_print_c(t_printf *print_control,
				t_handle_c *control,
				t_parse_flags *flag_control)
{
	if (unless(flag_control->is_left_justified))
		handle_padding(print_control, control, flag_control);
	ft_putchar(control->print_me);
	(print_control->chars_printed) += control->char_count;
	if (flag_control->is_left_justified)
		handle_padding(print_control, control, flag_control);
}
