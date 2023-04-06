/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_heredoc_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:13:21 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	init_here_doc(t_heredoc *hd, char **av)
{
	hd->stdinfd = open("/dev/stdin", O_RDONLY);
	if (hd->stdinfd < 0)
		return (alert_msg("Open stdin error !\n"), 0);
	hd->tmpfd = open("here_doc", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (hd->tmpfd < 0)
		return (alert_msg("Open file here_doc error !\n"), 0);
	hd->line = get_next_line(hd->stdinfd);
	if (hd->line == NULL)
		return (alert_msg("Gnl init error !\n"), 0);
	hd->limiter = ft_strjoin(av[2], "\n");
	if (hd->limiter == NULL)
	{
		free(hd->line);
		alert_msg("Limiter join error !\n");
		return (0);
	}
	return (1);
}

void	exit_here_doc(t_heredoc *hd)
{
	get_next_line(-1);
	if (hd->line)
		free(hd->line);
	if (hd->limiter)
		free(hd->limiter);
	close(hd->tmpfd);
	close(hd->stdinfd);
}

int	listen_here_doc(t_heredoc *hd)
{
	while (ft_strncmp(hd->line, hd->limiter, ft_strlen(hd->limiter)) != 0)
	{
		hd->written = write(hd->tmpfd, hd->line, ft_strlen(hd->line));
		if (hd->written != ft_strlen(hd->line))
		{
			free(hd->line);
			free(hd->limiter);
			alert_msg("Write error !\n");
			return (0);
		}
		free(hd->line);
		hd->line = get_next_line(hd->stdinfd);
		if (hd->line == NULL)
		{
			alert_msg("Gnl error !\n");
			return (0);
		}
	}
	return (1);
}

int	here_doc(int cmdnbr, char **av, char **envp)
{
	char		**pipex_args;
	t_heredoc	hd;
	int			hd_status;

	if (init_here_doc(&hd, av) == 0)
		return (-1);
	hd_status = listen_here_doc(&hd);
	if (hd_status == 0)
	{
		exit_here_doc(&hd);
		return (-1);
	}
	else
	{
		exit_here_doc(&hd);
		pipex_args = retrieve_args(cmdnbr + 3, av);
		multi_pipes(cmdnbr, pipex_args, envp, 1);
		if (unlink("here_doc") == -1)
			return (free_args(pipex_args), -1);
		free_args(pipex_args);
		return (0);
	}
}
