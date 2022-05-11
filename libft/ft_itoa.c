/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:28:14 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/10 11:10:00 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_char(int n)
{
	if (n == -2147483648)
		return (11);
	else if (n < 0)
		return (count_char(n * (-1)) + 1);
	else if (n < 10)
		return (1);
	else
		return (count_char(n / 10) + 1);
}

void	convert_to_char(char *sol, int size, long int num)
{
	sol[size] = '\0';
	if (num < 0)
	{
		sol[0] = '-';
		num *= -1;
		while (size > 1)
		{
			sol[size - 1] = num % 10 + '0';
			num = num / 10;
			size--;
		}
	}
	else
	{
		while (size > 0)
		{
			sol[size - 1] = num % 10 + '0';
			num = num / 10;
			size--;
		}
	}
}

char	*ft_itoa(int n)
{
	int			size;
	char		*result;
	long int	num;

	size = count_char(n);
	result = (char *)ft_calloc(size + 1, sizeof(char));
	if (!result)
		return (NULL);
	num = (long int)n;
	convert_to_char(result, size, num);
	return (result);
}

/*Esta función crea una string que representa el valor entero recibido como
 * argumento. Gestiona números negativos*/