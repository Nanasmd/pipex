#include <pipex_bonus.h>

void	command_or_die(t_pipex *ctl, char *raw_cmd)
{
	char	*str;

	str = raw_cmd;
	str = ft_skip_whitespace(str);
	if (ft_strlen(str) == 0)
		die_cmd(ctl, raw_cmd);
}
