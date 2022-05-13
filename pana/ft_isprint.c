/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:26:44 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 10:26:47 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int	main(void){
	int x; 
	x= 'a';
	printf("el caracter %i es imprimible: %i\n", x, ft_isprint(x));	
	
	x= '\0'; 
	printf("el caracter %i es imprimible: %i\n", x, ft_isprint(x));	
	
	x= 207; 
	printf("el caracter %i es imprimible: %i\n", x, ft_isprint(x));	
	
	x= 171; 
	printf("el caracter %i es imprimible: %i\n", x, ft_isprint(x));	
	
	return(0);
}*/
