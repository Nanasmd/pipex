#include <pipex.h>

int	fourex(int argc, char **argv, char **envp)
{
	t_pipex	ctl;

	initialize_fourex(&ctl, argc, argv, envp);
	handle_left(&ctl);
	handle_right(&ctl);
	return (EXIT_SUCCESS);
}
