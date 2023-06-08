/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:52:47 by tabreia-          #+#    #+#             */
/*   Updated: 2023/04/19 17:00:25 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_msg(pid_t pid, char *str)
{
	char	ch;
	int		bits;
	int		size;

	size = ft_strlen(str);
	while (size > 0 || *str == '\0')
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
		size--;
	}
}

void	handle(int sig)
{
	if (sig == SIGUSR1)
	{
		ft_printf("%s", "Message successfully received by server\n");
		exit(0);
	}	
}

void	set_handle_struct(void)
{
	struct sigaction	sa;

	sa.sa_handler = &handle;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
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
	set_handle_struct();
	send_msg(pid, av[2]);
	while (1)
		pause();
	return (0);
}
