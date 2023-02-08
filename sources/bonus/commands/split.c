#include <pipex_bonus.h>

char	**split_command_or_die(char *raw_command)
{
	char	**split_command;

	split_command = ft_split(raw_command, ' ');
	die_if_null(split_command);
	return (split_command);
}
