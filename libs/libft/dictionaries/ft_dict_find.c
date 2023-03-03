/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:33:05 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:33:06 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Find the value of a key in a dictionary.
 *
 * @param dictionary The NULL-terminated dictionary array to be searched.
 * @param key The key to search for.
 * @return void* The value or NULL.
 */
void	*ft_dict_find(const t_dict **dictionary, char *key)
{
	t_dict	**entry;

	entry = (t_dict **)dictionary;
	while (*entry != NULL)
	{
		if (ft_streq(key, (*entry)->key))
			return ((*entry)->value);
		entry++;
	}
	return (NULL);
}
