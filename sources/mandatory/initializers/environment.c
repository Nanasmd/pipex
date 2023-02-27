
#include <pipex.h>

static void	set_paths(t_pipex *ctl)
{
	ctl->paths = get_paths_or_die(ctl->envp);
	ft_add_lalloc_array(&ctl->free_me, (void **)ctl->paths);
}

void	initialize_environment(t_pipex *ctl)
{
	ctl->path = get_clean_path_or_die(ctl->envp);
	set_paths(ctl);
	log_path(ctl);
	log_paths(ctl);
}
