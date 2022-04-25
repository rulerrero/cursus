/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:36:02 by rherrero          #+#    #+#             */
/*   Updated: 2022/04/25 12:57:30 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*scpy;

	scpy = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
		return (i);
	}
	return (i);
	
	i = len - 1;
	if (c == '\0')
		return (&scpy[len]);
	while (i >= 0)
	{
		if (scpy[i] == c)
			return (&s[i]);
		i--;
	}
	return (0);
}
