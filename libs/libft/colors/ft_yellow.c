/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_yellow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:33:00 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:33:01 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string to standard out in yellow.
 *
 * @param str The string to be printed.
 */
void	ft_yellow(char *str)
{
	ft_putstr(Y);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in yellow followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_yellow_endl(char *str)
{
	ft_putstr(Y);
	ft_putstr(str);
	ft_putendl(RC);
}

/**
 * @brief Prints a string to standard out in bold yellow.
 *
 * @param str The string to be printed.
 */
void	ft_yellowb(char *str)
{
	ft_putstr(YB);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in bold yellow followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_yellowb_endl(char *str)
{
	ft_putstr(YB);
	ft_putstr(str);
	ft_putendl(RC);
}
