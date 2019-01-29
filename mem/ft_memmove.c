/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 18:03:51 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:15:29 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*memdest;
	unsigned char	*memsrc;
	size_t			count;

	memdest = (unsigned char *)dst;
	memsrc = (unsigned char *)src;
	count = 0;
	if (memdest > memsrc)
		while (count < n)
		{
			memdest[n - 1] = memsrc[n - 1];
			n--;
		}
	else
		while (count < n)
		{
			memdest[count] = memsrc[count];
			count++;
		}
	return (dst);
}
