
#include <pipex.h>

void	execute_or_die(char *command_path, char **split_cmd, char **envp)
{
	int	execve_return;

	execve_return = execve(command_path, split_cmd, envp);
	if (execve_return < 0)
		die2(command_path);
}
