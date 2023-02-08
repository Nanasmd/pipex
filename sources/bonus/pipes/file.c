#include <pipex_bonus.h>

void	file_to_stdin(int infile_fd)
{
	dup2(infile_fd, STDIN_FILENO);
}

void	stdout_to_file(int outfile_fd)
{
	dup2(outfile_fd, STDOUT_FILENO);
}
