/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:39:10 by tabreia-          #+#    #+#             */
/*   Updated: 2022/12/05 14:32:08 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pointbase(void *ptr)
{
	unsigned long	ret;
	int				res;

	ret = (unsigned long)ptr;
	res = 0;
	if (ret > 15)
		res += ft_pointbase((void *)(ret / 16));
	res += ft_putchar("0123456789abcdef"[ret % 16]);
	return (res);
}

int	ft_printmem(void *nbr)
{
	int				res;

	if (nbr == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	res = ft_pointbase(nbr);
	return (res + 2);
}
