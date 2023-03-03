/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_commas.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:00:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:00:43 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Advances a char pointer until it stops pointing at an ASCII comma ','.
 *
 * @param str The C-string to be skipped.
 * @return char* Pointer after the skipped chars.
 */
char	*ft_skip_commas(char *str)
{
	while (*str == ',')
		str++;
	return (str);
}
