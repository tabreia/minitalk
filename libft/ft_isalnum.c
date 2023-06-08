/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:16:03 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:13:50 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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
		printf("%d %c\n", ft_isalnum(av[1][0]), av[1][0]);
		printf("%d %c\n", isalnum(av[1][0]), av[1][0]);
	}
	else
		printf("\n");
}*/