#include <pipex.h>

int	open_file_or_die(char *path)
{
	int	open_fd;
	int	open_flags;

	open_flags = O_RDONLY;
	open_fd = open(path, open_flags);
	if (open_fd < 0)
		die2(path);
	return (open_fd);
}
