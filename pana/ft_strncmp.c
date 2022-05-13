/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:24:23 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 10:24:31 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	if (n == 0)
		return (0);
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (--n && *tmp1 == *tmp2 && *tmp1 && *tmp2)
	{
		tmp1++;
		tmp2++;
	}
	return (*tmp1 - *tmp2);
}
/*
#include <stdio.h>
int	main(void){

	char	cad1[]="perola";
	char	cad2[]="pasta";
	int	n= 5; 
	printf("Cadena 1: %s\n Cadena 2: %s\n Caracteres comparados: %d Resultado:
			%i\n", cad1, cad2, n, ft_strncmp(cad1,cad2,n));


	return(0);
}
*/