/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:27:40 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 10:27:42 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>
int	main(void){
	int x = 'T';
	printf("%i to lower is: %i\n", x, ft_tolower(x));
	x = '8';
	printf("%i to lower is: %i\n", x, ft_tolower(x));
	return(0);
}
*/