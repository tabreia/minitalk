/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:53:51 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:14:42 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
		printf("%d %c\n", ft_isdigit(av[1][0]), av[1][0]);
		printf("%d %c\n", isdigit(av[1][0]), av[1][0]);
	}
	else
		printf("\n");
}*/