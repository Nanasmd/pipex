/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:11:02 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:12:41 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Checks if character is a lowercase ASCII letter.
 *
 * @param character The char to be checked.
 * @return true Character is a lowercase ASCII letter.
 * @return false Character is not a lowercase ASCII letter.
 */

bool	ft_islower(char character)
{
	return (character >= 'a' && character <= 'z');
}
