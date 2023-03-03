<<<<<<< HEAD
#include <pipex_bonus.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:07:44 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:07:45 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"
>>>>>>> master

void	free_memory(t_pipex *ctl)
{
	ft_free_lalloc(&(ctl->free_me));
}
