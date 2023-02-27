

#include <pipex.h>

static void	redirect_descriptors(t_pipex *ctl)
{
	stdout_to_file(ctl->outfile.fd);
	pipe_to_stdin(ctl->pipe_fds);
	close_pipes_fds(ctl->pipe_fds);
	close_or_die(ctl->outfile.fd);
}

static void	initialize(t_pipex *ctl)
{
	initialize_outfile(ctl);
	initialize_right(ctl);
}

void	handle_right(t_pipex *ctl)
{
	initialize(ctl);
	redirect_descriptors(ctl);
	execute_or_die(ctl->right.path, ctl->right.tokens, ctl->envp);
	free_memory(ctl);
}
