/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-guya <ple-guya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:56:36 by ple-guya          #+#    #+#             */
/*   Updated: 2023/12/07 00:47:21 by ple-guya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_calloc(size_t elementCount, size_t elementSize);
void	ft_bzero(void *s, size_t n);
char	*ft_strnjoin(char *s1, char *s2, int nl);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		is_newline(char *s);
int		read_buffer(int fd, char	*buffer);
//zarma les liste chaniee
t_list	*ft_lstnew(void	*content);


#endif