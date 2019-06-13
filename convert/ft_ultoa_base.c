/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultoa_base.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/24 15:12:34 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:12:36 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_ullen(unsigned long value, int base)
{
	int		count;

	count = 0;
	while (value)
	{
		value = value / base;
		count++;
	}
	return (count);
}

char	*ft_ultoa_base(unsigned long value, int base)
{
	char	*res;
	int		index;
	int		len;

	len = ft_ullen(value, base);
	if (!(res = (char*)MALLOC(sizeof(char) * len + 1)))
		return (NULL);
	index = len;
	while (value)
	{
		res[index] = ft_to_ascii(value % base);
		value = value / base;
		index--;
	}
	res += index;
	return (res);
}
