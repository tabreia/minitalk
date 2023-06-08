/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:42:44 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/14 12:12:21 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!(s))
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int main (void)
{
	char s[] = "lorem ipsum dolor sit amet";
	int fd = 2;
	ft_putstr_fd(s, fd);
}*/
