/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alert_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:39:06 by vmourtia          #+#    #+#             */
/*   Updated: 2023/04/03 18:22:09 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

/*
	There is no exit() in order to reproduce the true pipe
	behavior, which runs all following commands even if
	the input file is not found.
*/
void	error_msg(char *msg)
{
	perror(msg);
}

void	alert_msg(char *msg)
{
	write(2, msg, ft_strlen(msg));
}
