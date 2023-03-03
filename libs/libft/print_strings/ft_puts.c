/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:02:18 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:02:19 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes string s to standard out followed by an endline.
 *
 * @param str The C-string to be printed.
 */
void	ft_puts(char *str)
{
	ft_putendl(str);
}
