/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:35:01 by tabreia-          #+#    #+#             */
/*   Updated: 2022/12/05 14:30:04 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_numbers(unsigned int n)
{
	unsigned int	temp;
	unsigned int	length;

	length = 0;
	temp = 1;
	if (n == 0)
		return (1);
	while (temp <= n && length < 10)
	{
		length++;
		temp *= 10;
	}
	return (length);
}

char	*ft_utoa(unsigned int n)
{
	char	*s;
	int		i;

	i = count_numbers(n);
	s = ft_calloc(i + 1, sizeof(char));
	if (!s)
		return (0);
	else if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[i-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (s);
}
