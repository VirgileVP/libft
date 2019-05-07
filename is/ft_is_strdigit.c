#include "libft.h"

int	ft_is_strdigit(char *str)
{
	int count;

	count = 0;
	if (str)
	{
		while (str[count])
		{
			if (ft_isdigit(str[count]) == 0)
				return (0);
			count++;
		}
		return (1);
	}
	return (0);
}