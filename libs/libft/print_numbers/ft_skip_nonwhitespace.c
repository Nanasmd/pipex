/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_nonwhitespace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:01:20 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:01:21 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Advances a char pointer until it stops pointing
 * at a non-whitespace ASCII character.
 *
 * @param str The C-string to be skipped.
 * @return char* Pointer after the skipped chars.
 */
char	*ft_skip_nonwhitespace(char *str)
{
	while (!ft_is_whitespace(*str))
		str++;
	return (str);
}
