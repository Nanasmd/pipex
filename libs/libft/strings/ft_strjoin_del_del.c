/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_del_del.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:49 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:50 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an allocated string joining delete_me with dont_delete_me,
 * then deletes delete_me and delete_me_too.
 *
 * @param delete_me The first C-string to be joined and deleted.
 * @param delete_me_too The second C-string to be joined and deleted.
 * @return char* The joined C-string.
 */
char	*ft_strjoin_del_del(char **delete_me, char **delete_me_too)
{
	char	*new_string;

	new_string = ft_strjoin(*delete_me, *delete_me_too);
	ft_strdel(delete_me);
	ft_strdel(delete_me_too);
	return (new_string);
}
