/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:10:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:33 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Checks if character is an ASCII character.
 *
 * @param character The char to be checked.
 * @return true Character is an ASCII character.
 * @return false Character is not an ASCII character.
 */
bool	ft_isascii(char character)
{
	return (character >= 0);
}
