/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-guya <ple-guya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 04:29:13 by ple-guya          #+#    #+#             */
/*   Updated: 2023/12/07 00:47:21 by ple-guya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

/* int	is_newline(char *s)
{
	char *str;
	int i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if ('\n' == str[i])
			return (i);
		i++;
	}
	return (0);
} */

/* char	*ft_strnjoin(char *s1, char *s2, int nl)
{
	size_t len;
	size_t i;
	size_t slen;
	size_t slen2;
	char *join;

	i = 0;
	if (nl)
		slen2 = (size_t)nl;
	else 
		slen2 = ft_strlen(s2);
	slen = ft_strlen(s1);
	len = slen + slen2;
	join = malloc(len + 1);
	if (!join)
		return (free(s1), NULL);
	ft_memcpy(join, s1, slen);
	if (s1)
		free(s1);
	while (s2[i])
		join[slen++] = s2[i++];
	join[len] = '\0';
	return (join);
} */

char	*ft_strnjoin(char *s1, char *s2, int nl)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	len1 = ft_strlen(s1);
	if (nl)
		len2 = nl;
	else
		len2 = ft_strlen(s2);
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (free(s1), NULL);
	str[len2 + len1] = '\0';
	while (len2--)
		str[len1 + len2] = s2[len2];
	while (len1--)
		str[len1] = s1[len1];
	free(s1);
	return (str);
}

void *ft_calloc(size_t nmemb, size_t size)
{
	char *str;
	size_t memsize;

	memsize = nmemb * size;
	if (size && memsize / size != nmemb)
		return (NULL);
	str = malloc(memsize);
	if (!str)
		return (NULL);
	ft_bzero(str, memsize);
	return (str);
}

void ft_bzero(void *s, size_t n)
{
	unsigned char *str;

	str = s;
	while (n-- > 0)
		*str++ = '\0';
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *s;

	if (!dest && !src)
		return (NULL);
	s = (char *)dest;
	while (n-- > 0)
		*s++ = *(char *)src++;
	return (dest);
}

