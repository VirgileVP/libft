/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 14:14:49 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 08:35:35 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict dest, const char *restrict src, size_t nb)
{
	size_t	src_cnt;
	size_t	dest_size;

	src_cnt = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src_cnt < nb && src[src_cnt])
	{
		dest[dest_size] = src[src_cnt];
		dest_size++;
		src_cnt++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
