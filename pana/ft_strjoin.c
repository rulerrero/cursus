/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 09:20:08 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/07 12:02:49 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*cad;

	if (!s1 || !s2)
		return (NULL);
	cad = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!cad)
		return (0);
	j = 0;
	while (s1[j])
	{
		cad[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		cad[j] = s2[i];
		i++;
		j++;
	}
	cad[j] = '\0';
	return (cad);
}
/* 
int	main(void)
{
	char	*res;
	char	*cad1;
	char	*cad2;

	cad1 = "hijode";
	cad2 = "puta";
	printf("cad1: %s cad2: %s\n", cad1, cad2);
	res = ft_strjoin(cad1, cad2);
	printf("res: %s", res);
	return (0);
}
 */