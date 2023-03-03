/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:51:33 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:34 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Calculates Fibonacci numbers by their index.
 *
 * @param index The index in the Fibonacci sequence.
 * @return int Its corresponding number.
 */
int	ft_fibonacci(int index)
{
	int	fibonacci;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	fibonacci = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibonacci);
}
