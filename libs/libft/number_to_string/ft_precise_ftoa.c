/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precise_ftoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:46 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:47 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	cast_parts(float n, long *whole, float *decimal)
{
	*whole = (long)n;
	*decimal = (n - *whole);
	if (*decimal < 0)
		*decimal *= -1;
	if (*whole < 0)
		*whole *= -1;
}

static void	whole_to_string(float n, char **whole_str, long whole)
{
	char	*aux;

	*whole_str = ft_ltoa(whole);
	if (n < 0)
	{
		aux = *whole_str;
		*whole_str = ft_strjoin("-", *whole_str);
		free(aux);
	}
}

static void	decimal_to_string(int precision, char **decimal_str, float decimal)
{
	char	*aux;
	char	leading_zeros;

	aux = ft_itoa((int)(decimal * ft_pow(10, precision)));
	leading_zeros = precision - ft_strlen(aux);
	if (leading_zeros <= 0)
	{
		*decimal_str = aux;
		return ;
	}
	while (leading_zeros)
	{
		*decimal_str = ft_strjoin("0", aux);
		free(aux);
		aux = *decimal_str;
		--leading_zeros;
	}
}

static char	*piece_together(char *whole_str, char *decimal_str)
{
	char	*float_str;

	float_str = ft_strjoin(whole_str, ".");
	free(whole_str);
	float_str = ft_strjoin_free_free(float_str, decimal_str);
	return (float_str);
}

/**
 * @brief Parses a float n into an allocated string with arbitrary precision.
 *
 * @param n The float to be parsed.
 * @param precision The precision.
 * @return char* Its string representation.
 */
char	*ft_precise_ftoa(float n, int precision)
{
	long	whole;
	float	decimal;
	char	*whole_str;
	char	*decimal_str;

	if (precision < 0)
		return (NULL);
	cast_parts(n, &whole, &decimal);
	whole_to_string(n, &whole_str, whole);
	decimal_to_string(precision, &decimal_str, decimal);
	return (piece_together(whole_str, decimal_str));
}
