
#include <pipex_bonus.h>

void	str_to_pipe(int pipe_fds[2], char *str)
{
	write(pipe_fds[PIPE_WRITE], str, ft_strlen(str));
}
