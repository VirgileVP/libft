/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 14:11:05 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:15:34 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*temp;

	temp = b;
	while (n > 0)
	{
		*temp = c;
		n--;
		temp++;
	}
	return (b);
}
