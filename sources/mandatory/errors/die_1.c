
#include <pipex.h>

void	die_if_null(void *ptr)
{
	if (ptr == NULL)
		die2(ERR_NULL_POINTER);
}

void	die(void)
{
	perror(ERR_GENERIC_RED);
	ft_putstr(RC);
	exit(EXIT_FAILURE);
}

void	die2(char *location)
{
	ft_putstr(RB);
	perror(location);
	ft_putstr(RC);
	exit(EXIT_FAILURE);
}

void	die3(char *location, int exit_status)
{
	ft_putstr(RB);
	perror(location);
	ft_putstr(RC);
	exit(exit_status);
}

void	die4(int exit_status)
{
	perror(ERR_GENERIC_RED);
	ft_putstr(RC);
	exit(exit_status);
}
