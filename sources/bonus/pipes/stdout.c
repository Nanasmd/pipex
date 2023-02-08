#include <pipex_bonus.h>

void	stdout_to_pipe(int pipe_fds[2])
{
	dup2(pipe_fds[PIPE_WRITE], STDOUT_FILENO);
}

void	pipe_to_stdout(int pipe_fds[2])
{
	dup2(pipe_fds[PIPE_READ], STDOUT_FILENO);
}
