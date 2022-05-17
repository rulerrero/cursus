/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:25:37 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/13 13:25:44 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newl)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = newl;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = newl;
}
