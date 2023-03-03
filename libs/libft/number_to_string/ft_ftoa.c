/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:22 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:23 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Parses a float n into an allocated string
 * with a default precision of 6.
 *
 * @param n The float to be parsed.
 * @return char* Its string representation.
 */
char	*ft_ftoa(float n)
{
	return (ft_precise_ftoa(n, DEFAULT_PRINT_FLOAT_PRECISION));
}
