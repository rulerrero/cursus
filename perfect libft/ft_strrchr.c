/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-ca <fdiaz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:31:44 by fdiaz-ca          #+#    #+#             */
/*   Updated: 2022/04/26 20:34:55 by fdiaz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)

{
	char	*p;
	char	*l;

	p = (char *)s;
	l = 0;
	while (*p != '\0')
	{
		if ((unsigned char)*p == (unsigned char)c)
			l = p;
		p++;
	}
	if (c == '\0')
		return (p);
	return (l);
}
