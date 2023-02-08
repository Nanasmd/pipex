#include <pipex_bonus.h>

void	stdin_to_pipe(int pipe_fds[2])
{
	dup2(pipe_fds[PIPE_WRITE], STDIN_FILENO);
}

void	pipe_to_stdin(int pipe_fds[2])
{
	dup2(pipe_fds[PIPE_READ], STDIN_FILENO);
}
