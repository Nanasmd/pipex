/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:59:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:59:46 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes ascii representation of an int to a file descriptor fd.
 *
 * @param number The number to be printed.
 * @param fd The file descriptor to write to.
 */
void	ft_putnbr_fd(int number, int fd)
{
	long	_number;

	_number = number;
	if (_number < 0)
	{
		ft_putchar_fd('-', fd);
		_number *= -1;
	}
	if (_number >= 10)
		ft_putnbr_fd(_number / 10, fd);
	ft_putchar_fd('0' + (_number % 10), fd);
}
