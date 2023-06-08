/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:38:00 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/14 12:12:36 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		tlen;
	int		i;
	int		k;

	if (!(s1) || !(s2))
		return (0);
	tlen = ft_strlen(s1) + ft_strlen(s2);
	res = malloc((sizeof(char) * tlen) + 1);
	i = 0;
	k = 0;
	if (!res)
		return (NULL);
	while (s1[k])
		res[i++] = s1[k++];
	k = 0;
	while (s2[k])
		res[i++] = s2[k++];
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>
int main (void)
{
	char s1[] = "Isto e ";
	char s2[] = "um teste";
	char *res;

	res = ft_strjoin(s1,s2);
	printf("%s\n", res);
}*/