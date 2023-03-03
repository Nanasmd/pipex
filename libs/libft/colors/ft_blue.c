/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:31:43 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:31:44 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string to standard out in blue.
 *
 * @param str The string to be printed.
 */
void	ft_blue(char *str)
{
	ft_putstr(B);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in blue followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_blue_endl(char *str)
{
	ft_putstr(B);
	ft_putstr(str);
	ft_putendl(RC);
}

/**
 * @brief Prints a string to standard out in bold blue.
 *
 * @param str The string to be printed.
 */
void	ft_blueb(char *str)
{
	ft_putstr(BB);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in bold blue followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_blueb_endl(char *str)
{
	ft_putstr(BB);
	ft_putstr(str);
	ft_putendl(RC);
}
