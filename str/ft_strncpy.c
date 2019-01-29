/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 13:58:26 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 20:29:52 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	counter;

	counter = 0;
	while (src[counter] != '\0' && counter < len)
	{
		dst[counter] = src[counter];
		counter++;
	}
	while (counter < len)
		dst[counter++] = '\0';
	return (dst);
}
