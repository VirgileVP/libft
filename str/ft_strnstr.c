/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 17:47:57 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 11:23:42 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*counts1;
	char	*counts2;
	size_t	size;

	if (!*s2)
		return ((char *)s1);
	while (len-- && *s1)
	{
		if (*s1 == *s2)
		{
			size = len;
			counts1 = (char *)s1 + 1;
			counts2 = (char *)s2 + 1;
			while (size-- && *counts1 && *counts2 && *counts1 == *counts2)
			{
				counts1++;
				counts2++;
			}
			if (!*counts2)
				return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}
