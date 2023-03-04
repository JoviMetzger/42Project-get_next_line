/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmetzger <jmetzger@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 10:02:56 by jmetzger      #+#    #+#                 */
/*   Updated: 2022/12/08 13:06:55 by jmetzger      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// get_next_line
char	*get_next_line(int fd);
char	*clear_stash(char *stash);
char	*add_to_stash(char *stash);
char	*read_and_stash(int fd, char *stash, char *read_file, char *str);

// get_next_line_utils
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strchr(char *str);
size_t	ft_strlen(const char *str);

#endif
