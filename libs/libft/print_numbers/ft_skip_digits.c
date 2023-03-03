/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_digits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:00:47 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:00:48 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Advances a char pointer until it stops pointing at an ASCII number.
 *
 * @param str The C-string to be skipped.
 * @return char* Pointer after the skipped chars.
 */
char	*ft_skip_digits(char *str)
{
	while (ft_isdigit(*str))
		str++;
	return (str);
}
