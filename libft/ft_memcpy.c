/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:11:52 by rherrero          #+#    #+#             */
/*   Updated: 2022/04/28 09:27:19 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*src_cpy;
	unsigned char		*dst_cpy;
	size_t				i;

	src_cpy = (unsigned char *)src;
	dst_cpy = (unsigned char *)dst;
	i = 0;
	if (!(src_cpy || dst_cpy))
	{
		return (NULL);
	}
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		i++;
	}
	return (dst_cpy);
}
