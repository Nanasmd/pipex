/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cyan.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:31:52 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:31:53 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string to standard out in cyan.
 *
 * @param str The string to be printed.
 */
void	ft_cyan(char *str)
{
	ft_putstr(C);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in cyan followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_cyan_endl(char *str)
{
	ft_putstr(C);
	ft_putstr(str);
	ft_putendl(RC);
}

/**
 * @brief Prints a string to standard out in bold cyan.
 *
 * @param str The string to be printed.
 */
void	ft_cyanb(char *str)
{
	ft_putstr(CB);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in bold cyan followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_cyanb_endl(char *str)
{
	ft_putstr(CB);
	ft_putstr(str);
	ft_putendl(RC);
}
