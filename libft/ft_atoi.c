/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:17:33 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/15 15:50:34 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		n;
	int		sig;
	int		flag;
	char	*pstr;

	pstr = (char *)nptr;
	sig = 1;
	n = 0;
	flag = 0;
	while (*pstr == 32 || (*pstr >= 9 && *pstr <= 13))
		pstr++;
	while (*pstr == '-' || *pstr == '+')
	{
		if (*pstr == '-')
			sig *= -1;
		if (flag == 1)
			return (0);
		flag++;
		pstr++;
	}
	while (*pstr >= '0' && *pstr <= '9')
		n = n * 10 + (*pstr++ - 48);
	return (n * sig);
}

/*#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char str[] = "+-54";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}*/