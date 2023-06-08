/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:32:23 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 14:19:57 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*p == c)
			return (p);
		p++;
		i--;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int main(void)
{
	const char s[] = "";
	const char c = '\0';
	char *ret;
	char *ret1;

	ret = ft_strchr(s,c);
	ret1 = strchr(s,c);
	printf("%s\n", ret);
	printf("%s\n", ret1);
}*/