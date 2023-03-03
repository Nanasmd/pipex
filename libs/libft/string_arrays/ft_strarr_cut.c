/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_cut.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:07:22 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:07:23 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Cuts a pointer of a NULL-terminated C-string array.
 *
 * @param cut_me The pointer to be cut.
 */
void	ft_strarr_cut(char **cut_me)
{
	while (cut_me != NULL && *cut_me != NULL)
	{
		*cut_me = *(cut_me + 1);
		cut_me++;
	}
}
