#include <pipex_bonus.h>

void	handle_child(t_pipex *ctl, char *raw_cmd)
{
	pid_t	pid;
	int		pipe[2];

	pipe_or_die(pipe);
	pid = fork_or_die();
	if (pid == CHILD_PROCESS_ID)
	{
		stdout_to_pipe(pipe);
		close_pipe(pipe);
		execute_or_die(ctl, raw_cmd);
		return ;
	}
	pipe_to_stdin(pipe);
	close_pipe(pipe);
	waitpid(pid, NULL, 0);
}
