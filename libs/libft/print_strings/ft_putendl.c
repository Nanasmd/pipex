/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:02:13 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:02:14 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes string s to standard out followed by an endline.
 *
 * @param str The C-string to be printed.
 */
void	ft_putendl(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}
