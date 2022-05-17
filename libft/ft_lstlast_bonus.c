/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:17:13 by asolano-          #+#    #+#             */
/*   Updated: 2022/05/17 11:28:38 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*next;

	if (lst == 0)
		return (0);
	next = lst->next;
	while (next)
	{
		lst = next;
		next = lst->next;
	}
	return (lst);
}
