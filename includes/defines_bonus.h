/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:08:48 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:44:22 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_BONUS_H
# define DEFINES_BONUS_H

# define CHILD_PROCESS_ID 0

# define PIPE_READ 0
# define PIPE_WRITE 1

# define CREATE_PERMISSION 0000664

# define PATH_PREFIX "PATH="
# define PATH_PREFIX_LENGTH 5

# define NOT_ASCII -42

# define HDOC_IDENTIFIER "here_doc"
# define HDOC_FEED "> "

/******************************************************************************\
 * MESSAGES
\******************************************************************************/

# define HELP_MSG "Welcome to nasamdi's pipex!\n\
\n\
USAGE:\n\
	./pipex file1 \"cmd1\" \"cmd2\" \"cmd3\" ... \"cmdn\" file2\n\
	behaves like: < file1 cmd1 | cmd2 | cmd3 | ... | cmdn > file2\n\
\n\
	./pipex here_doc LIMITER \"cmd1\" \"cmd2\" file\n\
	behaves like: cmd1 << LIMITER | cmd2 >> file\n\
\n\
EXAMPLES:\n\
	./pipex infile \"ls -l\" \"grep a\" \"wc -l\" outfile\n\
	./pipex infile \"cat\" \"tr a b\" \"tr b a\" \"tr a b\" \"tr b a\" outfile\n\
\n\
	./pipex here_doc l \"grep a\" \"wc -l\" outfile\n\
	./pipex here_doc x \"cat\" \"tr a b\" outfile\n\
\n\
"

/******************************************************************************\
 * ERRORS
\******************************************************************************/

# define EXIT_SUCCESS_STR "0\n"
# define EXIT_FAILURE_STR "1\n"

# define EKEYEXPIRED 127
# define EKEYEXPIRED_STR "127\n"

# define ERR_GENERIC_RED "\033[0;31mERROR"
# define ERR_NULL_POINTER "ERROR: critical null pointer"
# define ERR_GNL "ERROR: couldn't read stdin (GNL)"
# define ERR_NO_CMD "command not found"

#endif
