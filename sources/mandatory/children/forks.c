#include <pipex.h>

int	fork_or_die(void)
{
	int	pid;

	pid = fork();
	if (pid < 0)
		die();
	return (pid);
}

void	wait_for_left(t_pipex *ctl)
{
	waitpid(ctl->left.pid, NULL, 0);
}

void	wait_for_right(t_pipex *ctl)
{
	waitpid(ctl->right.pid, NULL, 0);
}

void	wait_for_children(t_pipex *ctl)
{
	wait_for_left(ctl);
	wait_for_right(ctl);
}
