/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:20:22 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/10 11:24:13 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sol;
	unsigned int	i;

	if (!s)
		return (NULL);
	sol = (char *)ft_calloc(sizeof(*s), ft_strlen(s) + 1);
	if (!sol)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sol[i] = f(i, (char)s[i]);
		i++;
	}
	return (sol);
}

/* Esta función aplica la función f dada como parámetro a cada caracter de la 
 * string s, genera una nueva string con el resultado de usar la función*/