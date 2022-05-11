/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:41:10 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/10 11:19:52 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = dst;
	s = src;
	lasts = s + (len - 1);
	lastd = d + (len - 1);
	if (src == dst)
		return (0);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
		while (len--)
			*lastd-- = *lasts--;
	return (dst);
}

/*Esta función copia de forma no destructiva, si el recurso y el destino se
 * solapan lo hará de forma que se pueda completar la copia*/
/*si el src es menor que el destino empezamos a copiar desde detrás hacia 
 * adelante (primera condición)*/
/* si no simplemente copiamos de izquierda a derecha*/