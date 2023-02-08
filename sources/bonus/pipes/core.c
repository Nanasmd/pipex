#include <pipex_bonus.h>

void	pipe_or_die(int pipe_fds[2])
{
	int	pipe_return;

	pipe_return = pipe(pipe_fds);
	if (pipe_return < 0)
		die();
}

void	close_pipe(int pipe_fds[2])
{
	close_or_die(pipe_fds[PIPE_READ]);
	close_or_die(pipe_fds[PIPE_WRITE]);
}
