/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_strarr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:07:09 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:07:10 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints an array of strings to standard out.
 *
 * @param strings The C-string array to be printed.
 */
void	ft_put_strarr(char **strings)
{
	while (*strings)
	{
		ft_putchar('	');
		ft_putendl(*strings++);
	}
}
