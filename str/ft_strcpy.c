/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 13:55:13 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 17:44:53 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		index_dest;

	index_dest = 0;
	while (src[index_dest] != '\0')
	{
		dest[index_dest] = src[index_dest];
		index_dest++;
	}
	dest[index_dest] = '\0';
	return (dest);
}
