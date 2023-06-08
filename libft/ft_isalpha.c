/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:22:11 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:14:13 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
/*#include <ctype.h>
#include <stdio.h>
int main(int ac, char **av)
{
	//int var = '5';
	if(ac == 2)
	{
		printf("%d %c\n", ft_isalpha(av[1][0]), av[1][0]);
		printf("%d %c\n", isalpha(av[1][0]), av[1][0]);
	}
	else
		printf("\n");
}*/