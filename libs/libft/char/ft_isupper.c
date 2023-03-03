/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:11:10 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:13:15 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Checks if character is an uppercase ASCII letter.
 *
 * @param character The char to be checked.
 * @return true Character is an uppercase ASCII letter.
 * @return false Character is not an uppercase ASCII letter.
 */
bool	ft_isupper(char character)
{
	if (character >= 'A' && character <= 'Z')
		return (true);
	return (false);
}
