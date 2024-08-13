/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjamil <mjamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:12:28 by mjamil            #+#    #+#             */
/*   Updated: 2024/06/27 18:20:49 by mjamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8192
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);

char	*ft_strdup(char *str);
char	*get_after_newline(char *str);
char	*get_before_newline(char *str);
char	*parse_line(char **buffer, char **temp);

void	read_line(int fd, char **buffer, char **temp);
void	free_strs(char **str1, char **str2, char **str3);

int		newline_reached(char *str);
int		ft_strlen(char *str, char stop);
#endif