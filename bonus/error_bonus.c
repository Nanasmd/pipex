/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamadi <nsamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:43:45 by bcaffere          #+#    #+#             */
/*   Updated: 2023/02/05 00:00:42 by nsamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex_bonus.h"

int	msg(char *err)
{
	write(2, err, ft_strlen(err));
	return (1);
}

void	msg_pipe(char *arg)
{
	write(2, ERR_CMD, ft_strlen(ERR_CMD));
	write(2, arg, ft_strlen(arg));
	write(2, "\n", 1);
}

void	msg_error(char *err)
{
	perror(err);
	exit (1);
}
