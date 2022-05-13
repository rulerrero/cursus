/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:26:42 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/06 18:22:50 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp_len(const char *s, size_t len)
{
	if (ft_strlen(s) >= len)
		return (len);
	else
		return (ft_strlen(s));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*cad;
	unsigned int	i;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	cad = malloc(comp_len(s, len) + 1);
	if (!cad)
		return (0);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		cad[i] = ((char *)s)[start];
		i++;
		start++;
	}
	cad[i] = '\0';
	return (cad);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "probemos";
	char *s2;
	s2 = ft_substr(s1, 3, 9);
	printf("cadena 1: %s, substr: %s", s1, s2);
	return (0);
}*/
