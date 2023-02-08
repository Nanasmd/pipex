#include <pipex.h>

void	initialize_children(t_pipex *ctl)
{
	initialize_right(ctl);
	initialize_left(ctl);
}
