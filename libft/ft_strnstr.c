/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:23:07 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/17 10:29:51 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while ((needle[j] == haystack[i + j]) && (i + j < len))
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/* busca un string corto (needle) en otro más grande (haystack), si
 * encuentra la coincidencia devuelve el puntero al principio de la coincidencia
 * */