/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:43:51 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 10:25:46 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main (void){
	char c= 'a';
	printf("%i\n",ft_isalpha(c));	
	c = '2';
	printf("%i\n",ft_isalpha(c));
	c= '\n';	
	printf("%i\n",ft_isalpha(c));	
}*/
