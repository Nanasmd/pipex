/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:32 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:33 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Parses a long double n into an allocated string
 * with a default precision of 6.
 *
 * @param n The long double to be parsed.
 * @return char* Its string representation.
 */
char	*ft_ldtoa(long double n)
{
	return (ft_precise_ldtoa(n, DEFAULT_PRINT_FLOAT_PRECISION));
}
