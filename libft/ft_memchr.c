/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:47:40 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:14:55 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		if (*p == c)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int main(void)
{
	const char s[] = "Tcestce";
	const char c = 'c';
	char *ret;

	ret = memchr(s,c, 3);
	if (ft_memchr)
		printf("%s\n", ret);
	else
		printf("\n");
}*/