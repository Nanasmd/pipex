/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:20:38 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:20:39 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

int	close_or_die(int close_me)
{
	close_me = close(close_me);
	if (close_me < 0)
		die();
	return (close_me);
}
