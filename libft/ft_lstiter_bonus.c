/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:07:34 by asolano-          #+#    #+#             */
/*   Updated: 2022/05/13 13:26:10 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == 0)
		return ;
	while (lst->next != 0)
	{
		(f)(lst->content);
		lst = lst->next;
	}
	(f)(lst->content);
}
