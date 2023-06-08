/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:29:45 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:17:59 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>
int main(void)
{
	char c = 'A';
	printf("%c\n",ft_tolower(c));
	printf("%c\n",tolower(c));
}*/