/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/24 15:12:20 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:12:21 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_upd_0(char *res)
{
	res[0] = '0';
	res[1] = 0;
}

char	*ft_itoa_base(int value, int base)
{
	char	*res;
	int		index;
	int		operat;

	if (!(res = (char*)malloc(sizeof(char) * 34)))
		return (NULL);
	operat = 1;
	if (value < 0)
		operat = -1;
	if (value == 0)
		ft_upd_0(res);
	res[33] = 0;
	index = 32;
	while (value)
	{
		res[index] = ft_to_ascii(value % base);
		value = value / base;
		index--;
	}
	if (operat == -1 && base == 10)
		res[index] = '-';
	else
		index++;
	res += index;
	return (res);
}
