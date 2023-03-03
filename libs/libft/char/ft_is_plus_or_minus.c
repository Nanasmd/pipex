/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_plus_or_minus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:10:34 by nasamadi          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:38 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Checks if character is ASCII plus or minus.
 *
 * @param character The char to be checked.
 * @return true Character is ASCII plus or minus.
 * @return false Character is not ASCII plus or minus.
 */
bool	ft_is_plus_or_minus(char character)
{
	return (character == '+' || character == '-');
}
