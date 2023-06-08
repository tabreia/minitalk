/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:18:33 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/14 12:09:30 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
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
		printf("%d %c\n", ft_isascii(av[1][0]), av[1][0]);
		printf("%d %c\n", isascii(av[1][0]), av[1][0]);
	}
	else
		printf("\n");
}*/