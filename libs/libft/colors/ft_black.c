/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_black.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:31:40 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:31:41 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string to standard out in black.
 *
 * @param str The string to be printed.
 */
void	ft_black(char *str)
{
	ft_putstr(BK);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in black followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_black_endl(char *str)
{
	ft_putstr(BK);
	ft_putstr(str);
	ft_putendl(RC);
}

/**
 * @brief Prints a string to standard out in bold black.
 *
 * @param str The string to be printed.
 */
void	ft_blackb(char *str)
{
	ft_putstr(BKB);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in bold black followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_blackb_endl(char *str)
{
	ft_putstr(BKB);
	ft_putstr(str);
	ft_putendl(RC);
}
