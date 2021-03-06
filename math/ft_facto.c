/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_facto.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/17 16:15:41 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/17 16:15:44 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

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
