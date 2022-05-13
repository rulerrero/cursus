/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:59:04 by marvin            #+#    #+#             */
/*   Updated: 2022/05/09 17:12:47 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	unsigned int	nb;
	short int		sign;

	sign = 1;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		else if (*str == '+')
			sign = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		nb = (nb * 10) + (*str++ - 48);
	if (nb > INT_MAX && sign == 1)
		return (-1);
	else if (nb - 1 > INT_MAX && sign == -1)
		return (0);
	return ((int)(nb * sign));
}
/*
int	main(void)
{
	const char	c[] = "-99";

	printf("Numero: %i\n", ft_atoi(c));
	return (0);
}*/
