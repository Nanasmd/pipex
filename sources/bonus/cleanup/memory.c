#include <pipex_bonus.h>

void	free_memory(t_pipex *ctl)
{
	ft_free_lalloc(&(ctl->free_me));
}
