#include <pipex_bonus.h>

void	initialize_environment(t_pipex *ctl)
{
	if (ctl->paths != NULL)
		return ;
	ctl->path = get_clean_path_or_die(ctl->envp);
	ctl->paths = get_paths_or_die(ctl->envp);
	ft_add_lalloc_array(&ctl->free_me, (void **)ctl->paths);
}

static void	initialize_execute(t_pipex *ctl, char *raw_cmd, t_exec *ex)
{
	command_or_die(ctl, raw_cmd);
	ex->tokens = tokenize_or_die(raw_cmd);
	ft_add_lalloc_array(&ctl->free_me, (void **)ex->tokens);
	ex->cmd = ex->tokens[0];
	ex->path = find_executable(ex->cmd, ctl->paths);
	if (ex->path == NULL)
		die_cmd(ctl, ex->cmd);
	ft_add_lalloc(&ctl->free_me, ex->path);
}

void	execute_or_die(t_pipex *ctl, char *raw_cmd)
{
	t_exec	ex;

	initialize_environment(ctl);
	initialize_execute(ctl, raw_cmd, &ex);
	ex.code = execve(ex.path, ex.tokens, ctl->envp);
	if (ex.code < 0)
		die6(ctl, ex.path);
}
