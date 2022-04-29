/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:23:07 by rherrero          #+#    #+#             */
/*   Updated: 2022/04/29 13:02:17 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	l2;

	l2 = ft_strlen(s2);
	if (!l2)
		return ((char *)s1);
	while (len >= l2)
	{
		len--;
		if (!ft_memcmp(s1, s2, l2))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
