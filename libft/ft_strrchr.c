/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:32:20 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/10 17:44:13 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = (char *)s;
	i = ft_strlen(s);
	while (*p)
	{
		p++;
	}
	while (i >= 0)
	{
		if (*p == c)
			return (p);
		p--;
		i--;
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	const char s[] = "bonjour";
	const char c = '\0';
	char *ret;

	ret = ft_strrchr(s,c);
	printf("%s\n", ret);
}*/