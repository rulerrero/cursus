/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:44:19 by rherrero          #+#    #+#             */
/*   Updated: 2022/04/21 10:01:33 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sing;

	i = 0;
	result = 0;
	sing = 0;
	if (str[i] == '\0')
		return (result);
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (sing % 2 != 0)
		result = result * -1;
	return (result);
}

int	main(void)
{
	char	str[] = " --+++++712345j06789ab567";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	
}
