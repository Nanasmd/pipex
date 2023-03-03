/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:10:38 by nasamadi          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:36 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Checks if character is an ASCII whitespace character.
 *
 * @param character The char to be checked.
 * @return true Character is ASCII plus or minus.
 * @return false Character is not ASCII plus or minus.
 */
bool	ft_is_whitespace(char character)
{
	return (character == '\n'
		|| character == '\t'
		|| character == '\v'
		|| character == '\r'
		|| character == '\f'
		|| character == ' ');
}
