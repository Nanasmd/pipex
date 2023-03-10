/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:58:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:58:54 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static bool	bad_base_length(const char *base, size_t base_length)
{
	size_t	real_base_length;

	if (base_length == 0 || base_length == 1)
		return (true);
	real_base_length = ft_strlen(base);
	if (real_base_length == 0 || real_base_length == 1)
		return (true);
	if (base_length != real_base_length)
		return (true);
	return (false);
}

static bool	free_and_return(char *free_me, bool is_valid)
{
	if (free_me == NULL)
		return (is_valid);
	free(free_me);
	return (is_valid);
}

/**
 * @brief Checks if a string is a valid base for a numberig system:
 *
 * @param base A string with the characters that represent a number
 * in a counting system.
 *   - Can't have any repeating chars.
 * @param base_length The number of different characters.
 *   - Must be greater than 1.
 *   - Must equal string length.
 * @return true The base is valid.
 * @return false The base isn't valid.
 */
bool	ft_is_valid_base(const char *base, const size_t base_length)
{
	size_t	used_position;
	char	*used_characters;

	if (bad_base_length(base, base_length))
		return (false);
	used_characters = ft_salloc(sizeof(char) * (base_length + 1));
	used_characters[0] = '\0';
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (free_and_return(used_characters, false));
		used_position = 0;
		while (used_characters[used_position] != '\0')
		{
			if (used_characters[used_position] == *base)
				return (free_and_return(used_characters, false));
			used_position++;
		}
		used_characters[used_position] = *base;
		used_characters[used_position + 1] = '\0';
		base++;
	}
	return (free_and_return(used_characters, true));
}
