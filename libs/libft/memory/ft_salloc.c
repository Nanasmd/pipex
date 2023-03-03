/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_salloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:00 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:01 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Safe malloc:
 * if allocation fails it terminates the program with an error.
 *
 * @param size The number of bytes to be allocated.
 * @return void* The address of the allocated memory.
 */
void	*ft_salloc(size_t size)
{
	void	*pointer;

	pointer = malloc(size);
	if (pointer == NULL && (size > 0))
		ft_die(SALLOC_ERR);
	return (pointer);
}
