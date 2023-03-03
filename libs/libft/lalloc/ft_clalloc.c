/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:44:35 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:44:36 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Safely allocates memory and adds it to the lalloc.
 *
 * @param lalloc A linked list with the pointers of all allocated variables.
 * @param nmemb Number of elements.
 * @param size Byte size of each element.
 * @return void* The address of the allocated memory.
 */
void	*ft_clalloc(t_list **lalloc, size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = ft_scalloc(nmemb, size);
	ft_add_lalloc(lalloc, pointer);
	return (pointer);
}
