/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lalloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:46:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:46:43 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Safely allocates memory and adds it to the lalloc.
 *
 * @param lalloc A linked list with the pointers of all allocated variables.
 * @param size The number of bytes to be allocated.
 * @return void* The address of the allocated memory.
 */
void	*ft_lalloc(t_list **lalloc, size_t size)
{
	void	*pointer;

	pointer = ft_salloc(size);
	ft_add_lalloc(lalloc, pointer);
	return (pointer);
}
