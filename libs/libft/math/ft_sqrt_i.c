/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:54:52 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:54:53 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Calculates the square root of an int.
 *
 * @param number The number to be rooted.
 * @return int Its square root.
 */
int	ft_sqrt_i(int number)
{
	unsigned int	square;
	unsigned int	test_root;

	if (number <= 0)
		return (0);
	test_root = 0;
	square = 0;
	while (square <= (unsigned int)number)
	{
		test_root++;
		square = test_root * test_root;
	}
	test_root -= 1;
	if (test_root * test_root != (unsigned int)number)
		return (0);
	return (test_root);
}
