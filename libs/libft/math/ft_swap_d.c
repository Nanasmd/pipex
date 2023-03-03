/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:01 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:02 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Swaps the values of two double pointers.
 *
 * @param a First double pointer.
 * @param b Second double pointer.
 */
void	ft_swap_d(double *a, double *b)
{
	double	auxiliary;

	auxiliary = *a;
	*a = *b;
	*b = auxiliary;
}
