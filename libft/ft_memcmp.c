/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:00:44 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:14:59 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 1;
	while ((ps1 || ps2) && (i <= n))
	{
		if (*ps1 != *ps2)
		{
			return (*ps1 - *ps2);
		}
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
	char s1[] = "t\200";
	char s2[] = "t\0";
	printf("%d\n",ft_memcmp(s1, s2, 2));
    printf("%d\n",memcmp(s1, s2, 2));
}*/
