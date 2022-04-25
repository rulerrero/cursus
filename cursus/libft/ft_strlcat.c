/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:23:58 by rherrero          #+#    #+#             */
/*   Updated: 2022/04/25 09:26:02 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}

int	main(void)
{
	char	a[] = "hola";
	char	b[] = " que";

	printf("%s", ft_strlcat(a, b));

}
