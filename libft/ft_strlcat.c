/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:23:58 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/10 12:02:03 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	cont;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	cont = len_dst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (len_dst + len_src);
}

/*Esta función concatena 2 strings hasta un límite de caracteres, coge el src y
 * lo copia a partir del final del dest, pero la longitud empieza al principio
 * del dest, es decir, va a contar los caracteres de dest, va a copiar los que 
 * falten para llegar al size - 1 y ese último caracter será el final de línea
 * */