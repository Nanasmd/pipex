/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:21:28 by valentin          #+#    #+#             */
/*   Updated: 2023/04/03 18:20:49 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

int	main(int ac, char **av, char **envp)
{
	int	exit_code;

	if (ac < 5)
		return (alert_msg(ARGS_INPUT_ALERT), 0);
	else if (ac > MAX_ACS)
		return (alert_msg(MAX_FDS_ALERT), 0);
	if (ft_strncmp(av[1], "here_doc", ft_strlen("here_doc")) == 0)
	{
		if (ac == 5)
			return (alert_msg(ARGS_INPUT_ALERT), 0);
		exit_code = here_doc(ac - 4, av, envp);
	}
	else
		exit_code = multi_pipes(ac - 3, av, envp, 0);
	return (exit_code);
}
