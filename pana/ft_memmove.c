/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:46:49 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/04 19:51:47 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char	*dst_cp;
	char	*src_cp;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_cp = (char *)dst;
	src_cp = (char *)src;
	if (dst_cp > src_cp)
	{
		while (len--)
			dst_cp[len] = src_cp[len];
	}
	else if (dst_cp < src_cp)
		ft_memcpy(dst, src, len);
	return (dst_cp);
}
/*
#include<stdio.h>
int main(void)
{
    char p1[]="casa";
    char p2[]="camion";
    void *p3;
    p3= NULL;
    p3= ft_memmove(p2,p1,3);
    printf("Palabra 1: %s Palabra 2: %s ft_memmove: %s\n", p1, p2, (char *)p3);
    return(0);
}*/