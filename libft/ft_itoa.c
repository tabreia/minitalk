/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:07:27 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/14 12:11:09 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getnumdigits(int n)
{
	int	numdigits;

	numdigits = 0;
	if (n == 0)
		numdigits = 1;
	if (n < 0)
	{
		n *= -1;
		numdigits++;
	}
	while (n)
	{
		n = n / 10;
		numdigits++;
	}
	return (numdigits);
}

static char	*convint(int numdigits, int n, char *str)
{
	int		i;
	int		aux;

	i = 0;
	str[i] = '0';
	if (n < 0)
	{
		str[i++] = '-';
		if (n == -2147483648)
		{
			str[1] = '2';
			n = -147483648;
		}
		n *= -1;
	}
	i = numdigits - 1;
	while (n > 0)
	{
		aux = n % 10;
		n = n / 10;
		str[i--] = (aux + 48);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		numdigits;

	numdigits = getnumdigits(n);
	str = malloc(sizeof(char) * numdigits + 1);
	if (!str)
		return (NULL);
	str = convint(numdigits, n, str);
	str[numdigits] = '\0';
	return (str);
}

/*#include <stdio.h>
int main (void)
{
	int c = -2147483648LL;

	printf("%s", ft_itoa(c));
}*/
