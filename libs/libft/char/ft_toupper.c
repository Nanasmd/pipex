/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:11:19 by nasamadi          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:26 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Raises character case if it is an lowercase ASCII letter.
 *
 * @param character The character to be raised.
 * @return char The uppercase character.
 */
char	ft_toupper(char character)
{
	if (ft_islower(character))
		return (character - 32);
	return (character);
}
