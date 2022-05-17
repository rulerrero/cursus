/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:46:43 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/17 11:38:45 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p != (char)c)
	{
		if (*p == '\0')
			return (NULL);
		p++;
	}
	return (p);
}

/*Esta función busca la primera aparición de un caracter en un string, si el
 * caracter a buscar es '\0' también lo encontrará, devolverá un puntero al 
 * caracter si lo encuentra o 0 si no lo encuentra*/