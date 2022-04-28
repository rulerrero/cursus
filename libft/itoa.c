
#include "libft.h"

static int ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

static void ft_strrev(char *str)
{
	size_t	lenght;
	size_t	i;
	char	tmp;

	lenght = ft_strlen(str);
	i = 0;
	while (i < lenght /2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[lenght - i - 1] = tmp;
		i++;
	}
}

char *ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	lenght;

	is_neg = (n < 0);
	if(!(str = ft_calloc(11 + i_neg, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	lenght = 0;
	while (n != 0)
	{
		str[lenght++] = '0' + ft_abs(n % 10);
		n = (n /10);
	}
	if (si_neg)
		str[lenght] = '-';
	ft_strrev(str);
	return(str);
}