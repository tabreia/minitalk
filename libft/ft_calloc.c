/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:03:46 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/14 12:09:05 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*pmem;

	pmem = malloc(nmemb * size);
	if (!(pmem))
		return (0);
	ft_bzero(pmem, nmemb * size);
	return (pmem);
}
/*#include <stdio.h>
int main (void)
{
	int size = 8539;

	void *d1 = ft_calloc(0, 0);
	void *d2 = calloc(0, 0);
	
}*/