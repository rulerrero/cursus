/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:26:07 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 10:26:09 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void){
	
	int x= 8;

	printf("El caracter numero %i devuelve: %i\n",x, ft_isascii(x)); 
	x= '*';	
	printf("El caracter numero %i devuelve: %i\n",x, ft_isascii(x)); 
	x= '[';
	printf("El caracter numero %i devuelve: %i\n",x, ft_isascii(x)); 
	x= 164;
	printf("El caracter numero %i devuelve: %i\n",x, ft_isascii(x)); 
	return(0);	
}
*/
