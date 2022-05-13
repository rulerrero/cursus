/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:26:26 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 10:26:30 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
int	main(void){
	int x = 8;
	printf("Es digito: %i , %i\n", x, ft_isdigit(x)); 
		
	x= 50;
	printf("Es digito: %i , %i\n", x, ft_isdigit(x)); 
		
	return(0);
}*/
