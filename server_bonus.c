/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:52:44 by tabreia-          #+#    #+#             */
/*   Updated: 2023/04/19 16:56:41 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sa_sig(int sig, siginfo_t *info, void *context)
{
	static char	ch;
	static int	bits;
	char		flag;

	flag = '\0';
	(void)context;
	if (!bits)
		bits = 0;
	if (!ch)
		ch = 0;
	if (sig == SIGUSR1)
		ch |= 1 << (7 - bits);
	else if (sig == SIGUSR2)
		ch &= ~(1 << (7 - bits));
	bits++;
	if (bits == 8)
	{
		write(1, &ch, 1);
		if (ch == '\0')
			kill(info->si_pid, SIGUSR1);
		ch = 0;
		bits = 0;
	}
	usleep(250);
}

void	set_handle_struct(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = &sa_sig;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	if (pid == -1)
	{
		ft_printf("Error");
		return (1);
	}
	ft_printf("PID: %d\n", pid);
	set_handle_struct();
	while (1)
		pause();
	return (0);
}
