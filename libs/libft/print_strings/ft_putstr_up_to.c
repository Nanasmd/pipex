/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_up_to.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:02:27 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:02:28 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string s up to an arbitrary position.
 *
 * @param str The C-string to be printed.
 * @param up_to The number of bytes to print.
 */
void	ft_putstr_up_to(char *str, size_t up_to)
{
	size_t	control;

	control = 0;
	if (str == NULL)
		return ;
	while (str[control] != '\0' && control < up_to)
		ft_putchar(str[control++]);
}
