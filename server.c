/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:21:08 by tabreia-          #+#    #+#             */
/*   Updated: 2023/04/19 16:56:58 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle(int sig)
{
	static char	ch;
	static int	bits;

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
		ch = 0;
		bits = 0;
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
