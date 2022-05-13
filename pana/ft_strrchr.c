/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 08:42:44 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 10:21:33 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*tmp;

	tmp = (char *)s;
	len = ft_strlen(s);
	if (*(tmp + len) == (char)c)
		return (tmp + len);
	while (len--)
	{
		if (*(tmp + len) == (char)c)
			return (tmp + len);
	}
	return (NULL);
}
/*char	*strrchr(const char *s, int c){
			int len;
		char *tmp;
		tmp = (char *)s;
		len = strlen(s);
		if (*(tmp + len) == (char)c)
			return (tmp + len);
		while (len--){
			if (*(tmp + len) == (char)c)
				  	return (tmp + len);
		}
		return (NULL);

}
#include <stdio.h>
int	main(void){
	char	word[]= "primero"; 
	char	*second;
	second = ft_strrchr(word,109);
	printf("%s\n",second);
	return(0);
}*/
