/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:18 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:19 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Parses a double n into an allocated string
 * with a default precision of 6.
 *
 * @param n The double to be parsed.
 * @return char* Its string representation.
 */
char	*ft_dtoa(double n)
{
	return (ft_precise_dtoa(n, DEFAULT_PRINT_FLOAT_PRECISION));
}
