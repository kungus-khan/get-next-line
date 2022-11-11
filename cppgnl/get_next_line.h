/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:34:05 by aikram            #+#    #+#             */
/*   Updated: 2022/04/15 06:54:36 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char*s1, char const *s2);
char	*ft_read(char *str, char *buf, int fd);
void	*ft_calloc(size_t count, size_t size);

int		ft_strnl(char *s);
int		ft_strlen(const char *s);

#endif
