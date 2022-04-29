/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:32:47 by rherrero          #+#    #+#             */
/*   Updated: 2022/04/29 13:40:22 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "allll";
	char	s2[] = "aaañasudkhjn";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d", strncmp(s1, s2, 3));
}

int main(void)
{
	const char s1[] = "\x12\xff\x65\x12\xbd\xde\xad";
	const char s2[] = "\x12\x02";
	size_t n;
	
	printf("%d\n", ft_strncmp (s1, s2, 3));
	printf("%d\n", strncmp (s1, s2, 3));

	return(0);	
}*/
