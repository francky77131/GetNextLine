/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:30:33 by frgojard          #+#    #+#             */
/*   Updated: 2022/07/13 12:38:21 by frgojard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_stock(char *line, char *buf);
size_t	ft_strlen(const char *s);
int		ft_start(char *stash, int c);
int		ft_end(char *stash);
char	*ft_strchr(const char *s, int c);
char	*ft_process(char *buf, int readsize, char *line, int fd);

#endif