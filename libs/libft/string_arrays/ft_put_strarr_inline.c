/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_strarr_inline.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:07:05 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:07:06 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints an array of strings to standard out in the same line.
 *
 * @param strings The C-string array to be printed.
 */
void	ft_put_strarr_inline(char **strings)
{
	while (*strings)
	{
		ft_putchar('\"');
		ft_putstr(*strings++);
		ft_putchar('\"');
		if (*strings != NULL)
			ft_putstr(", ");
	}
}
