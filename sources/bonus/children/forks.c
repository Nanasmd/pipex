#include <pipex_bonus.h>

pid_t	fork_or_die(void)
{
	pid_t	pid;

	pid = fork();
	if (pid < 0)
		die();
	return (pid);
}
