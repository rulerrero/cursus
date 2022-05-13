/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:24:46 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 10:24:59 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void){
	int x = 'a';
	printf("Si le paso %i devuelve: %i\n", x, ft_isalnum(x));
	x='B';
	printf("Si le paso %i devuelve: %i\n", x, ft_isalnum(x));
	x= '7';
	printf("Si le paso %i devuelve: %i\n", x, ft_isalnum(x));
	x= ';';
	printf("Si le paso %i devuelve: %i\n", x, ft_isalnum(x));
	return(0);
}*/
