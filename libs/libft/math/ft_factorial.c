/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:51:27 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:51:28 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Calculates the factorial of an int.
 *
 * @param number The number to be factorialized.
 * @return int Its factorial.
 */
int	ft_factorial(int number)
{
	int	factorial;

	if (number < 0)
		return (0);
	if (number == 0 || number == 1)
		return (1);
	factorial = number * ft_factorial(number - 1);
	return (factorial);
}
