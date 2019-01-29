/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmoy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 17:32:49 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:13:12 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_intmoy(int *tab)
{
	int	moy;
	int	divis;

	moy = 0;
	divis = 0;
	while (*tab)
	{
		moy += *tab;
		tab++;
		divis++;
	}
	if (divis == 0)
		return (0);
	return (moy / divis);
}
