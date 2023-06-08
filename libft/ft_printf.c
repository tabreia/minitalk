/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:46:59 by tabreia-          #+#    #+#             */
/*   Updated: 2022/12/05 14:32:18 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_arg(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
	{
		if (c == 'X')
			return (ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF"));
		else
			return (ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef"));
	}
	else if (c == 'p')
		return (ft_printmem(va_arg(ap, void *)));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	ap;

	i = 0;
	ret = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX", format[i + 1]))
			ret += ft_printf_arg(format[++i], ap);
		else if (format[i] == '%')
			ret += ft_putchar(format[++i]);
		else
			ret += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (ret);
}
