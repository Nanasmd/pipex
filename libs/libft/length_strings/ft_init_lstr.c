/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_lstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:47:00 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:47:01 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Initialize a length string of lenght 0.
 *
 * @param lstr The length string to be initialized.
 */
void	ft_init_lstr(t_lstr *lstr)
{
	lstr->len = 0;
	lstr->ptr = ft_salloc(lstr->len + 1);
	lstr->ptr[0] = '\0';
}
