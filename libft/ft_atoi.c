/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:47:09 by rherrero          #+#    #+#             */
/*   Updated: 2022/04/28 13:12:30 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_limits(int r, int sig)
{
	if (sig == 1 && r < 0)
		return (-1);
	if (sig == -1 && r > 0)
		return (0);
	return (r);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	int	sig;

	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	sig = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	r *= sig;
	return (ft_limits(r, sig));
}
