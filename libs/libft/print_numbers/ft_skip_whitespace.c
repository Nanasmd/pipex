/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_whitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:01:34 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:01:35 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Advances a char pointer
 * until it stops pointing at an ASCII whitespace.
 *
 * @param str The C-string to be skipped.
 * @return char* Pointer after the skipped chars.
 */
char	*ft_skip_whitespace(char *str)
{
	while (ft_is_whitespace(*str))
		str++;
	return (str);
}
