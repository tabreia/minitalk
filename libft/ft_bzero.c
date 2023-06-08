/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:34:15 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/11 16:13:20 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "Teste";
	char str1[] = "Teste";
	int n = 4;
	ft_bzero(str,n);
	bzero(str1,n);
	printf("%s\n", str);
	printf("%s\n", str1);
}*/