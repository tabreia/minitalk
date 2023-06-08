/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:27:23 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/14 12:13:10 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	if (!s)
		return (0);
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (len-- && start < (unsigned int)ft_strlen(s))
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = 0;
	return (sub);
}

/*#include <stdio.h>

int main (void)
{
	char s[] = "Isto e um teste de substring";
	char *res;

	res = ft_substr(s, 30, 9);
	printf("%s\n", res);
}*/