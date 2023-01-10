/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atardif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:55:46 by atardif           #+#    #+#             */
/*   Updated: 2023/01/10 13:27:28 by atardif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024

# endif

# include <stddef.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
size_t	ft_strlenmod(char *s);
char	*ft_substrmod(char *s, unsigned int start, size_t len);
char	*ft_strjoinmod(char *s1, char *s2);
int		ft_reschr(char *res);
void	ft_strlcpymod(char *dst, char *src, size_t size);

#endif
