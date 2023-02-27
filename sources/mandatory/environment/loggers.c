
#include <pipex.h>

void	log_path(t_pipex *ctl)
{
	if (VERBOSE)
		ft_printf(" => PATH: \"%s\"\n", ctl->path);
}

void	log_paths(t_pipex *ctl)
{
	if (VERBOSE)
	{
		ft_printf(" => PATHS:\n");
		ft_putstr_array(ctl->paths);
		ft_printf("	TOTAL: %d\n", ft_arrlen((void **)ctl->paths));
	}
}
