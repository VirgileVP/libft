/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_intlenght.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 13:44:25 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:12:53 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlenght(int nb)
{
	int		i;
	int		local_copy;

	i = 0;
	local_copy = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		local_copy = -local_copy;
		i++;
	}
	while (local_copy / 10 != 0)
	{
		local_copy = local_copy / 10;
		i++;
	}
	return (i + 1);
}
