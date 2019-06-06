#include "libft.h"

int		ft_facto(int n)
{
	int res;
	int	i;

	res = 1;
	i = 1;
	if (n <= 0)
		return (1);
	else
		while (i <= n)
		{
			res *= n;
			i++;
		}
	return (res);
}
