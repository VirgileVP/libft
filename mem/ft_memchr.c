/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 18:57:31 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:15:09 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *memsrc;

	memsrc = (unsigned char*)s;
	while (n > 0 && *memsrc != (unsigned char)c)
	{
		n--;
		memsrc++;
	}
	if (n == 0)
		return (NULL);
	else
		return (memsrc);
}
