/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:08:16 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:53:57 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"

static void	subvert_spaces(char *str)
{
	str = ft_strchr(str, '\'');
	while (str != NULL && *str != '\0')
	{
		str++;
		while (*str != '\'' && *str != '\0')
		{
			if (*str == ' ')
				*str = NOT_ASCII;
			str++;
		}
		if (*str == '\'')
			str++;
	}
}

static void	remove_quotes(char *str)
{
	str = ft_strchr(str, '\'');
	while (str != NULL)
	{
		ft_strcpy(str, str + 1);
		str = ft_strchr(str, '\'');
	}
}

static void	restore_spaces(char **tokens)
{
	char	*token;

	while (*tokens != NULL)
	{
		token = *tokens;
		while (*token != '\0')
		{
			if (*token == NOT_ASCII)
				*token = ' ';
			token++;
		}
		tokens++;
	}
}

char	**tokenize_or_die(char *raw_cmd)
{
	char	*free_me;
	char	**tokens;

	if (ft_strchr(raw_cmd, '\'') == NULL)
		return (split_command_or_die(raw_cmd));
	free_me = ft_strdup(raw_cmd);
	subvert_spaces(free_me);
	remove_quotes(free_me);
	tokens = split_command_or_die(free_me);
	restore_spaces(tokens);
	free(free_me);
	return (tokens);
}
