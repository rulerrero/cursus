/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:49:34 by rherrero          #+#    #+#             */
/*   Updated: 2022/04/27 12:46:44 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	s1_copy = malloc((len + 1) * sizeof(char));
	i = 0;
	if (s1_copy == 0)
		return (0);
	while (i < len)
	{
		s1_copy[i] = s1[i];
		i++;
	}
	s1_copy[i] = '\0';
	return (s1_copy);
}
