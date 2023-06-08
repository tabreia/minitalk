/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:45:15 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:40:17 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while ((*ps1 || *ps2) && (i < n))
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		i++;
		ps1++;
		ps2++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char s1[] = "test\200";
	char s2[] = "test\0";
	printf("%d\n",ft_strncmp(s1, s2, 5));
	printf("%d\n",strncmp(s1, s2, 5));
}*/