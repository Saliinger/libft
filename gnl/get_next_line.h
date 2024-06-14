/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:36 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/19 12:56:22 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
//# include <stdarg.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// Buffer
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// base function
char	*get_next_line(int fd);

// utils function
int		ft_strlen(char const *s);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strjoin(char *s1, char *s2);
int		ft_verify(char *stash);
char	*ft_clean(char *stash);

#endif
