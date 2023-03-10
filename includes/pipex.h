/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 01:15:40 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:51:16 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "defines.h"
# include "libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <sys/wait.h>

typedef struct s_file
{
	char	*path;
	int		fd;
}		t_file;

typedef struct s_child
{
	int		pid;

	char	*raw;
	char	**tokens;
	char	*cmd;
	char	**flags;
	char	*path;
}		t_child;

typedef struct s_pipex
{
	int		argc;
	char	**argv;

	char	**envp;
	char	*path;
	char	**paths;

	int		pipe_fds[2];

	t_file	infile;
	t_child	left;

	t_child	right;
	t_file	outfile;

	t_list	*free_me;
}		t_pipex;

int		fourex(int argc, char **argv, char **envp);

int		main(int argc, char **argv, char **envp);

/******************************************************************************\
 * INITIALIZERS
\******************************************************************************/

void	initialize_fourex(t_pipex *ctl, int argc, char **argv, char **envp);
void	initialize_environment(t_pipex *ctl);

void	initialize_children(t_pipex *ctl);
void	initialize_right(t_pipex *ctl);
void	initialize_left(t_pipex *ctl);

void	initialize_files(t_pipex *ctl);
void	initialize_outfile(t_pipex *ctl);
void	initialize_infile(t_pipex *ctl);

/******************************************************************************\
 * CHILDREN
\******************************************************************************/

int		fork_or_die(void);
void	wait_for_left(t_pipex *ctl);
void	wait_for_right(t_pipex *ctl);
void	wait_for_children(t_pipex *ctl);

void	handle_left(t_pipex *ctl);
void	handle_right(t_pipex *ctl);

/******************************************************************************\
 * COMMANDS
\******************************************************************************/

void	command_or_die(t_pipex *ctl, char *raw_cmd);

char	*get_clean_path_or_die(char **envp);
char	**get_paths_or_die(char **envp);

char	*find_executable(char *command, char **paths);
char	*find_executable_or_die(char *command, char **paths);

char	**split_command_or_die(char *raw_command);
char	**tokenize_or_die(char *raw_command);

void	execute_or_die(char *command_path, char **split_cmd, char **envp);

char	*find_right_executable_or_die(t_pipex *ctl);
char	*find_left_executable_or_die(t_pipex *ctl);

/******************************************************************************\
 * LOGGERS
\******************************************************************************/

void	log_fourex(t_pipex *ctl);
void	log_path(t_pipex *ctl);
void	log_paths(t_pipex *ctl);
void	log_command(char *command_executable, char **flags);

/******************************************************************************\
 * FILES
\******************************************************************************/

int		create_file_or_die(char *path);
int		open_file_or_die(char *path);
int		close_or_die(int close_me);

int		open_infile_or_die(t_pipex *ctl);
int		create_outfile_or_die(t_pipex *ctl);

/******************************************************************************\
 * PIPES
\******************************************************************************/

void	pipe_or_die(int pipe_fds[2]);
void	close_pipes_fds(int pipe_fds[2]);

void	stdout_to_pipe(int pipe_fds[2]);
void	pipe_to_stdin(int pipe_fds[2]);
void	file_to_stdin(int infile_fd);
void	stdout_to_file(int outfile_fd);

/******************************************************************************\
 * CLEANUP
\******************************************************************************/

void	free_memory(t_pipex *ctl);

/******************************************************************************\
 * ERRORS
\******************************************************************************/

void	check_argc(int argc);

void	die_if_null(void *ptr);
void	die(void);
void	die2(char *location);
void	die3(char *location, int exit_status);
void	die4(int exit_status);
void	die5(char *location, char *message, int exit_status);
void	die_cmd(t_pipex *ctl, char *raw_cmd);

void	print_error(char *location, char *message);

#endif
