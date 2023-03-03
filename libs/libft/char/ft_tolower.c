/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:11:14 by nasamadi          #+#    #+#             */
/*   Updated: 2023/02/24 14:35:28 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Lowers character case if it is an uppercase ASCII letter.
 *
 * @param character The character to be lowered.
 * @return char The lowercase character.
 */
char	ft_tolower(char character)
{
	if (ft_isupper(character))
		return (character + 32);
	return (character);
}
