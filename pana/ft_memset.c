/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:34:58 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/06 18:34:00 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*pointer;
	size_t	i;

	i = 0;
	pointer = (char *)s;
	while (i < n)
	{
		pointer[i] = (char)c;
		i++;
	}
	return (pointer);
}
/*
#include <stdio.h>
int	main(void){
	char p1[]= "123ABC";
	printf("El puntero %s el memset lo transf en: %p\n", p1, ft_memset(p1,65,
				3));
	return(0);
}*/
