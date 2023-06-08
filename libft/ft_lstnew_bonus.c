/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:52:53 by tabreia-          #+#    #+#             */
/*   Updated: 2022/11/14 12:00:20 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (!(new_elem))
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}
