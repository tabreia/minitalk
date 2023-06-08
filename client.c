/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:21:02 by tabreia-          #+#    #+#             */
/*   Updated: 2023/04/19 16:43:38 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_msg(pid_t pid, char *str)
{
	char	ch;
	int		bits;

	while (*str)
	{
		ch = *str;
		bits = sizeof(ch) * 8;
		while (bits--)
		{
			if (ch >> bits & 1)
				kill (pid, SIGUSR1);
			else
				kill (pid, SIGUSR2);
			usleep(250);
		}
		str++;
	}
}

int	main(int ac, char **av)
{
	pid_t	pid;

	if (ac != 3)
		return (1);
	pid = ft_atoi(av[1]);
	if (kill(pid, 0))
	{
		ft_printf("PID does not exist!");
		exit(1);
	}
	send_msg(pid, av[2]);
}
