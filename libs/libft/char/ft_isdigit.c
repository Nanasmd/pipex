/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:10:57 by nasamadi          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:32 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Checks if character is an ASCII digit.
 *
 * @param character The char to be checked.
 * @return true Character is an ASCII digit.
 * @return false Character is not an ASCII digit.
 */
bool	ft_isdigit(char character)
{
	return (character >= '0' && character <= '9');
}
