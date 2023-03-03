/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:11:06 by nasamadi          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:30 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Checks if character represents a ASCII printable character.
 *
 * @param character The char to be checked.
 * @return true Character is a ASCII printable character.
 * @return false Character is not a ASCII printable character.
 */
bool	ft_isprint(char character)
{
	return (character >= ' ' && character <= '~');
}
