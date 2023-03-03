/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_plus_or_minus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:01:28 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:01:29 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Advances a char pointer
 * until it stops pointing at an ASCII '+' or '-'.
 *
 * @param str The C-string to be skipped.
 * @return char* Pointer after the skipped chars.
 */
char	*ft_skip_plus_or_minus(char *str)
{
	while (ft_is_plus_or_minus(*str))
		str++;
	return (str);
}
