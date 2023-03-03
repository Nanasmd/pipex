/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unless.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:31:25 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:31:26 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Flips a boolean.
 *
 * @param condition The boolean to be flipped.
 * @return true If condition is false.
 * @return false If condition is true.
 */
bool	unless(bool condition)
{
	return (condition == false);
}
