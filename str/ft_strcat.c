/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 14:06:06 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:27:18 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	int		count_dest;
	int		count_src;

	count_dest = 0;
	count_src = 0;
	while (dest[count_dest] != '\0')
		count_dest++;
	while (src[count_src] != '\0')
	{
		dest[count_dest] = src[count_src];
		count_dest++;
		count_src++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
