/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:32:03 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:32:04 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string to standard out in purple.
 *
 * @param str The string to be printed.
 */
void	ft_purple(char *str)
{
	ft_putstr(P);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in purple followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_purple_endl(char *str)
{
	ft_putstr(P);
	ft_putstr(str);
	ft_putendl(RC);
}

/**
 * @brief  Prints a string to standard out in bold purple.
 *
 * @param str The string to be printed.
 */
void	ft_purpleb(char *str)
{
	ft_putstr(PB);
	ft_putstr(str);
	ft_putstr(RC);
}

/**
 * @brief Prints a string to standard out in bold purple followed by an endline.
 *
 * @param str The string to be printed.
 */
void	ft_purpleb_endl(char *str)
{
	ft_putstr(PB);
	ft_putstr(str);
	ft_putendl(RC);
}
