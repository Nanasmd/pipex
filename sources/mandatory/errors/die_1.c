/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:19:00 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:56:21 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

void	die_if_null(void *ptr)
{
	if (ptr == NULL)
		die2(ERR_NULL_POINTER);
}

void	die(void)
{
	perror(ERR_GENERIC_RED);
	ft_putstr(RC);
	exit(EXIT_FAILURE);
}

void	die2(char *location)
{
	ft_putstr(RB);
	perror(location);
	ft_putstr(RC);
	exit(EXIT_FAILURE);
}

void	die3(char *location, int exit_status)
{
	ft_putstr(RB);
	perror(location);
	ft_putstr(RC);
	exit(exit_status);
}

void	die4(int exit_status)
{
	perror(ERR_GENERIC_RED);
	ft_putstr(RC);
	exit(exit_status);
}
