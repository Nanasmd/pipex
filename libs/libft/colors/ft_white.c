/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_white.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:32:55 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:32:56 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string to standard out in white.
 *
 * @param str The string to be printed.
 */
void	ft_white(char *str)
{
	ft_putstr(W);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in white followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_white_endl(char *str)
{
	ft_putstr(W);
	ft_putstr(str);
	ft_putendl(RC);
}

/**
 * @brief Prints a string to standard out in bold white.
 *
 * @param str The string to be printed.
 */
void	ft_whiteb(char *str)
{
	ft_putstr(WB);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in bold white followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_whiteb_endl(char *str)
{
	ft_putstr(WB);
	ft_putstr(str);
	ft_putendl(RC);
}
