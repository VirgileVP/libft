/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 12:26:23 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:12:16 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*res;
	long	loc_cpy;
	long	len;

	len = ft_intlenght(n);
	loc_cpy = n;
	if (!(res = ((char *)MALLOC(sizeof(char) * len + 1))))
		return (NULL);
	if (loc_cpy < 0)
		loc_cpy = -loc_cpy;
	res[len] = '\0';
	len--;
	while (len >= 0)
	{
		res[len] = (loc_cpy % 10) + '0';
		loc_cpy = loc_cpy / 10;
		len--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
