#include <pipex_bonus.h>

static void	help_and_die(void)
{
	ft_putstr(HELP_MSG);
	exit(EXIT_SUCCESS);
}

void	check_argc(int argc)
{
	if (argc >= 5)
		return ;
	help_and_die();
}
