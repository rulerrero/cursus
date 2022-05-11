/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:32:47 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/10 12:02:26 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*Esta función compara n caracteres de los dos strings y devuelve la diferencia
 *  entre el primer caracter que no sea igual, si son iguales devuelve 0*/

/*int	main(void)
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
