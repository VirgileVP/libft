/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 21:38:04 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:15:15 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mems1;
	unsigned char	*mems2;

	mems1 = (unsigned char*)s1;
	mems2 = (unsigned char*)s2;
	while (n)
	{
		if (*mems1 != *mems2)
			return (*mems1 - *mems2);
		mems1++;
		mems2++;
		n--;
	}
	return (0);
}
