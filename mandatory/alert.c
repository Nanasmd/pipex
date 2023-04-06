/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alert.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:10:46 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:21 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

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
