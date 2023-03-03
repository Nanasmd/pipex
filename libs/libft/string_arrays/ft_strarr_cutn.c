/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_cutn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:07:31 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:07:32 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Cuts up to n pointers of a NULL-terminated C-string array.
 *
 * @param cut_me The pointer to be cut.
 * @param cut_me The number of pointers to cut.
 */
void	ft_strarr_cutn(char **cut_me, int n)
{
	if (cut_me == NULL)
		return ;
	if (n <= 0)
		return ;
	while (*cut_me != NULL && n > 0)
	{
		ft_strarr_cut(cut_me);
		n--;
	}
}
