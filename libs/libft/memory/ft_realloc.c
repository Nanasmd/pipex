/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:56 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:57 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new allocation of size bytes
 * and copies to it the contents of pointer up to size.
 * Also frees the old pointer.
 *
 * @param pointer The address to be reallocated.
 * @param old_size Its size.
 * @param new_size The new size.
 * @return void* The address of the allocated memory.
 */
void	*ft_realloc(void *pointer, size_t old_size, size_t new_size)
{
	void	*resize;

	resize = malloc(new_size);
	if (resize == NULL)
		return (NULL);
	if (pointer == NULL)
		return (resize);
	if (old_size == 0)
		return (resize);
	ft_memcpy(resize, pointer, old_size);
	free(pointer);
	return (resize);
}
