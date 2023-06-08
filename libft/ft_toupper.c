/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:25:19 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:18:03 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>
int main(void)
{
	char c = 'a';
	printf("%c\n",ft_toupper(c));
	printf("%c\n",toupper(c));
}*/