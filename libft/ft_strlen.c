/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:31:29 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:16:08 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}
/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[]= "Test2e";
	printf("%d\n", ft_strlen(str));
	printf("%d", strlen(str));   
}*/