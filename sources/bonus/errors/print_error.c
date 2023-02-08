#include <pipex_bonus.h>

void	print_error(char *location, char *message)
{
	ft_printf("%s%s: %s%s\n", RB, location, message, RC);
}
