#include <pipex_bonus.h>

void	die5(char *location, char *message, int exit_status)
{
	print_error(location, message);
	exit(exit_status);
}

void	die6(t_pipex *ctl, char *location)
{
	free_memory(ctl);
	die2(location);
}

void	die_cmd(t_pipex *ctl, char *raw_cmd)
{
	print_error(raw_cmd, ERR_NO_CMD);
	free_memory(ctl);
	exit(EKEYEXPIRED);
}
