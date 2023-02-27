
#include <pipex.h>

void	die5(char *location, char *message, int exit_status)
{
	print_error(location, message);
	exit(exit_status);
}

void	die_cmd(t_pipex *ctl, char *raw_cmd)
{
	print_error(raw_cmd, ERR_NO_CMD);
	free_memory(ctl);
	exit(EKEYEXPIRED);
}
