/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:07 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:08 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Swaps the values of two int pointers.
 *
 * @param a First int pointer.
 * @param b Second int pointer.
 */
void	ft_swap_i(int *a, int *b)
{
	int	auxiliary;

	auxiliary = *a;
	*a = *b;
	*b = auxiliary;
}
