/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_red.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:32:25 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:32:26 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string to standard out in red.
 *
 * @param str The string to be printed.
 */
void	ft_red(char *str)
{
	ft_putstr(R);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in red followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_red_endl(char *str)
{
	ft_putstr(R);
	ft_putstr(str);
	ft_putendl(RC);
}

/**
 * @brief Prints a string to standard out in bold red.
 *
 * @param str The string to be printed.
 */
void	ft_redb(char *str)
{
	ft_putstr(RB);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in bold red followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_redb_endl(char *str)
{
	ft_putstr(RB);
	ft_putstr(str);
	ft_putendl(RC);
}
