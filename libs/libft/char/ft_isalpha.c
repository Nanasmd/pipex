/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:10:48 by nasamadi          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:34 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Checks if character is an ASCII letter.
 *
 * @param character The char to be checked.
 * @return true Character is an ASCII letter.
 * @return false Character is not an ASCII letter.
 */
bool	ft_isalpha(char character)
{
	return (ft_isupper(character) || ft_islower(character));
}
