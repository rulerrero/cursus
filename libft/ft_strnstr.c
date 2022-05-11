/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:23:07 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/10 12:02:48 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	len_ndl;
	unsigned int	i;

	len_ndl = ft_strlen(needle);
	if (len_ndl == 0)
		return ((char *) haystack);
	if (len == 0)
		return (0);
	i = 0;
	while (haystack[i] && i <= (len - len_ndl))
	{
		if (!ft_strncmp(&haystack[i], needle, len_ndl))
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}

/* busca un string corto (needle) en otro más grande (haystack), si
 * encuentra la coincidencia devuelve el puntero al principio de la coincidencia
 * */