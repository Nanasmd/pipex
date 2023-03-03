/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:10:43 by nasamadi          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:35 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Checks if character is an ASCII letter or a number.
 *
 * @param character The char to be checked.
 * @return true Character is an ASCII letter or a number.
 * @return false Character is not an ASCII letter or a number.
 */
bool	ft_isalnum(char character)
{
	return (ft_isalpha(character) || ft_isdigit(character));
}
