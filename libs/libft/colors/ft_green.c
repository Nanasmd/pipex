/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_green.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:31:58 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:31:59 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string to standard out in green.
 *
 * @param str The string to be printed.
 */
void	ft_green(char *str)
{
	ft_putstr(G);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in green followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_green_endl(char *str)
{
	ft_putstr(G);
	ft_putstr(str);
	ft_putendl(RC);
}

/**
 * @brief Prints a string to standard out in bold green.
 *
 * @param str The string to be printed.
 */
void	ft_greenb(char *str)
{
	ft_putstr(GB);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in bold green followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_greenb_endl(char *str)
{
	ft_putstr(GB);
	ft_putstr(str);
	ft_putendl(RC);
}
