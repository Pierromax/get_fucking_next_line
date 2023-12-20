/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-guya <ple-guya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:53:40 by ple-guya          #+#    #+#             */
/*   Updated: 2023/12/05 16:07:20 by ple-guya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*get_next_buff(void *dest,void *src, int nl)
{
	int i;
	char	*s;
	char	*d;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while(i++ < BUFFER_SIZE)
	{
		if(nl && i < BUFFER_SIZE - nl)
			d[i] = s[i];
		else 
			d[i] = '\0';
		i++;
	}
	return(dest);

}

char	*rline(char *tmp)
{
	char *line;
	int i;

	i = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	line = malloc(i + 2);
	i = 0;
	while (tmp[i] && tmp[i] != '\n')
	{
		line[i] = tmp[i];
		i++;
	}
	line[i++] = '\n';
	line[i++] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE];
	int			n_read;
	char 		*tmp;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp = NULL;
	n_read = 1;
	while (n_read != 0)
	{
		nl = is_newline();
		tmp = ft_strjoin(tmp, buff);
		if (!tmp)
            return NULL;
		get_next_buff(buff, &buff[n_read], n_read);
		if(ft_strchr(buff, '\n'))
			break;
	}
	line = rline(tmp);
	free(tmp);
	return(line);
}

int main ()
{
	int fd;
	char *str;
	int i = 0;

	fd = open("rap.txt", O_RDONLY);
/* 	str = get_next_line(fd);
	while (str)
	{
		printf("%s", str);
		free(str);
		str = get_next_line(fd);
 	} */
	while (i  < 8)
	{
		str = get_next_line(fd);
		printf("%s", str);
		i++;
	} 
	close (fd);
	return 0;
}