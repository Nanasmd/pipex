/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alert_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:12:56 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	error_msg(char *msg)
{
	perror(msg);
}

void	alert_msg(char *msg)
{
	write(2, msg, ft_strlen(msg));
}
