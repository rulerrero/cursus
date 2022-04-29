/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:46:43 by rherrero          #+#    #+#             */
/*   Updated: 2022/04/27 12:40:47 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*scpy;

	scpy = (char *)s;
	i = 0;
	len = ft_strlen(scpy);
	if (c == '\0')
		return (&scpy[len]);
	while (scpy[i] != '\0')
	{
		if (scpy[i] == c)
			return (&scpy[i]);
		i++;
	}
	return (0);
}
