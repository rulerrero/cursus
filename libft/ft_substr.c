/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:27:40 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/10 13:21:48 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*result;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_calloc(1, 1));
	if (len > slen)
		len = slen - start;
	result = (char *)ft_calloc(sizeof(*s), (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[start] && (i < len) && (start < slen))
	{
		result[i] = s[start];
		start++;
		i++;
	}
	return (result);
}
