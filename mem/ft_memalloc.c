/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 01:55:32 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:14:58 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone_mem;

	if (!(zone_mem = malloc(size)))
		return (NULL);
	if (zone_mem)
		ft_bzero(zone_mem, size);
	return (zone_mem);
}
