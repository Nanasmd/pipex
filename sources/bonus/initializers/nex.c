#include <pipex_bonus.h>

static void	initialize_files(t_pipex *ctl)
{
	ctl->outfile.path = ctl->argv[ctl->argc - 1];
	ctl->outfile.fd = create_outfile_or_die(ctl);
	ctl->infile.path = ctl->argv[1];
	ctl->infile.fd = open_infile_or_die(ctl);
	file_to_stdin(ctl->infile.fd);
}

void	initialize_nex(t_pipex *ctl)
{
	ctl->arg = 2;
	initialize_files(ctl);
}
