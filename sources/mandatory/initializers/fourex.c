#include <pipex.h>

void	initialize_fourex(t_pipex *ctl, int argc, char **argv, char **envp)
{
	ctl->argc = argc;
	ctl->argv = argv;
	ctl->envp = envp;
	ctl->free_me = NULL;
	pipe_or_die(ctl->pipe_fds);
	initialize_environment(ctl);
}
