/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:58:47 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:14:08 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex_bonus.h"

int	main(int argc, char **argv, char **envp)
{
	check_argc(argc);
	return (nex(argc, argv, envp));
}
