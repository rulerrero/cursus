/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-ca <fdiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:52:24 by fdiaz-ca          #+#    #+#             */
/*   Updated: 2022/04/28 21:30:34 by fdiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nod;

	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			nod = ft_lstlast(*lst);
			(*nod).next = new;
		}
	}
}
