/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:14:09 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/05 15:37:27 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
 #include <stdio.h>
 int main(void)
 {
    char origen[]= "origin";
    char destino[]= "final";
    printf("La cadena origen es %s\n \
            La cadena destino es: %s\n \
            la funcion ft_memcpy muestra: %i\n", origen, destino,
	ft_memcpy(destino, origen, 6));
    return(0);
 }
 */