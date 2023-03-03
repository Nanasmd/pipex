/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_del.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:54 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an allocated string joining delete_me with dont_delete_me,
 * then deletes delete_me.
 *
 * @param delete_me The first C-string to be joined and deleted.
 * @param dont_delete_me The second C-string to be joined.
 * @return char* The joined C-string.
 */
char	*ft_strjoin_del(char **delete_me, const char *dont_delete_me)
{
	char	*new_string;

	new_string = ft_strjoin(*delete_me, dont_delete_me);
	ft_strdel(delete_me);
	return (new_string);
}
