/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strarr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:06:57 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:06:58 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Frees a NULL-terminated array of strings.
 *
 * @param free_me The C-string array to be freed.
 */
void	ft_free_strarr(char **free_me)
{
	ft_free_arr((void **)free_me);
}
