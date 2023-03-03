/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:35 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:11:36 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an allocated empty C-string.
 *
 * @return char* The new string.
 */
char	*ft_strnew(void)
{
	return (ft_strdup(""));
}
