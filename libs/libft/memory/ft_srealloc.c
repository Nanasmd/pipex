/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srealloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:13 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:14 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new allocation of size bytes
 * and copies to it the contents of pointer up to size.
 * If allocation fails it terminates the program with an error.
 *
 * @param pointer The address to be reallocated.
 * @param old_size Its size.
 * @param new_size The new size.
 * @return void* The address of the allocated memory.
 */
void	*ft_srealloc(void *pointer, size_t old_size, size_t new_size)
{
	void	*resize;

	resize = ft_salloc(new_size);
	if (pointer == NULL)
		return (resize);
	if (old_size == 0)
		return (resize);
	ft_memcpy(resize, pointer, old_size);
	free(pointer);
	return (resize);
}
