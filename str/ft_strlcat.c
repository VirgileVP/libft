/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 00:02:46 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 16:30:17 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char	*dest_cpy;
	char	*src_cpy;
	size_t	size;
	size_t	len_diff;

	dest_cpy = dest;
	src_cpy = (char *)src;
	size = n;
	while (*dest_cpy != '\0' && size-- != 0)
		dest_cpy++;
	len_diff = dest_cpy - dest;
	size = n - len_diff;
	if (size == 0)
		return (len_diff + ft_strlen(src_cpy));
	while (*src_cpy != '\0')
	{
		if (size != 1 && size--)
			*dest_cpy++ = *src_cpy;
		src_cpy++;
	}
	*dest_cpy = '\0';
	return (len_diff + (src_cpy - src));
}
