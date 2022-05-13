/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:32:08 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/04 17:52:06 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((char)c == ((char *)s)[i])
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	p1[] = "Irrelevante";
    void *p2;

	p2 = ft_memchr(p1, 118, 11);
	printf("la cadena inicial es: %s y la que devuelve es: %s\n ", p1, p2);
	return (0);
}*/
