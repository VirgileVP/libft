/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_alltoa.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/24 15:12:00 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:12:03 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static long long	ft_size(long long nb)
{
	long long	len;

	len = 0;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static void			ft_fill_str(char *str, long long nb)
{
	while (nb > 0)
	{
		*str = nb % 10 + '0';
		nb /= 10;
		str--;
	}
}

char				*ft_alltoa(long long nb)
{
	char		*dest;
	long long	len;
	int			operat;

	if (nb == 0)
		return ("0");
	len = ft_size(nb);
	operat = 0;
	if (nb < 0)
	{
		operat = 1;
		nb = -nb;
	}
	if (!(dest = ft_strnew(len + operat + 1)))
		return (NULL);
	if (operat)
		dest[0] = '-';
	ft_fill_str(dest + len + operat - 1, nb);
	dest[len + operat] = '\0';
	return (dest);
}
