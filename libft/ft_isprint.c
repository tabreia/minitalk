/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:22:31 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:14:46 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int main(void)
{

	int var = 126;

	printf("%d\n", ft_isprint(var));
	printf("%d", isprint(var));
	//int var = '5';
	if(ac == 2)
	{
		printf("%d %c\n", ft_isprint(av[1][0]), av[1][0]);
		printf("%d %c\n", isprint(av[1][0]), av[1][0]);
	}
	else
		printf("\n");
}*/