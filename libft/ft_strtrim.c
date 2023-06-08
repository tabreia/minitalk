/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:50:25 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/14 12:12:57 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*findchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (0);
}

static int	get_startsize(char const *s1, char const *set)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (findchr(set, s1[i++]))
	{
		size++;
	}
	return (size);
}

static int	get_endsize(char const *s1, char const *set, int index, int start)
{
	int	size;

	size = 0;
	while (index > start && findchr(set, s1[index]))
	{
		index--;
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	int		i;
	char	*res;

	i = 0;
	if (!(s1))
		return (NULL);
	start = get_startsize(s1, set);
	len = ft_strlen(s1);
	end = get_endsize(s1, set, len - 1, start);
	len = (end - start) + 1;
	res = ft_substr(s1, start, len);
	return (res);
}

/*#include <stdio.h>
int main (void)
{
	char const str[] = "          ";
	char const set[] = "\t \n";
	char *res;
	res = ft_strtrim(str, set);
	printf("%s\n", res);
}*/
