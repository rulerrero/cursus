/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherrero <rherrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:14:04 by rherrero          #+#    #+#             */
/*   Updated: 2022/05/11 18:57:51 by rherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	cnt_words(char const *s, char c)

{
	int	i;
	int	cnt;
	int	wrd;

	cnt = 0;
	i = 0;
	wrd = 0;
	while (s[i])
	{
		if ((s[i] != c) && (wrd == 0))
		{
			wrd = 1;
			cnt += 1;
		}
		else if (s[i] == c)
			wrd = 0;
		i++;
	}
	return (cnt);
}

int	len_words(char *s, int *i, char c)
{
	int	x;
	int	y;

	x = 0;
	while ((s[*i] == c) && s[*i])
	{
		*i += 1;
	}
	y = *i;
	while (s[y] && (s[y] != c))
	{
		y++;
		x++;
	}
	return (x);
}

int	wrt_words(char *s, char **p, int *i, char c)
{
	int		wrd_sz;
	int		j;
	int		ip;
	char	*pw;

	wrd_sz = len_words(s, i, c);
	ip = 0;
	while (wrd_sz != 0)
	{
		pw = (char *)ft_calloc(sizeof(char), (wrd_sz + 1));
		if (!pw)
			return (1);
		j = 0;
		while (j < wrd_sz)
		{
			pw[j++] = s[*i];
			*i += 1;
		}
		pw[j] = '\0';
		p[ip] = pw;
		ip++;
		wrd_sz = len_words(s, i, c);
	}
	p[ip] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**result;
	int		i;
	int		error;

	if (!s)
		return (NULL);
	count = cnt_words(s, c);
	result = (char **)ft_calloc(sizeof(char *), count + 1);
	if (!result)
		return (NULL);
	i = 0;
	error = wrt_words((char *)s, result, &i, c);
	if (error)
	{
		i = 0;
		while (result[i])
		{
			free(result[i]);
			i++;
		}
		free(result);
		return (NULL);
	}
	return (result);
}

/*int	main(void)
{
	char const *ch = "hola, que tal?";
	char c = ' ';
	int i = 0;

	while (i < cnt_words(ch, c))
	{
		printf("%s\n", ft_split(ch, c)[i]);
		i++;
	}
	return (0);
}*/
