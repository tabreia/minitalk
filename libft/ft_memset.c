/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:16:11 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:15:17 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	char s = 'a';
	int n = 4;
	int c = s;
	printf("%s\n", ft_memset(str, c, n));
	printf("%s\n", memset(str, c, n));
}*/