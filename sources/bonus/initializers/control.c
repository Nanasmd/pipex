#include <pipex_bonus.h>

void	initialize_control(t_pipex *ctl, int argc, char **argv, char **envp)
{
	ctl->argc = argc;
	ctl->argv = argv;
	ctl->envp = envp;
	ctl->last_cmd = ctl->argv[ctl->argc - 2];
	ctl->paths = NULL;
	ctl->free_me = NULL;
}
