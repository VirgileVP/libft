#include "libft.h"

int		ft_power(int n, int p)
{
	if (p == 0)
		return (1);
	return (n * ft_power(n, p - 1));
}
