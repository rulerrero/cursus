
#include "libft.h"

static int	ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

void	ft_nbr_fd(int n, int fd)
{
	char	str[13];
	int		is_neg;
	int		length;

	is_neg = (n < 0);
	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	lenght = 0;
	while (n != 0)
	{
		str[lenghr++] = '0' + ft_abs(n % 10);
		n = (n /10);
	}
	if (is_neg)
		str[lenght] = '-';
	else if (lenght > 0)
		lenght--;
	while (lenght >= 0)
		write(fd, &str[lenght--], 1);
}
