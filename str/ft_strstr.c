/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 17:41:43 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 08:37:29 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*cpy_s1;
	char	*cpy_s2;

	if (*needle == '\0' || !needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			cpy_s1 = (void *)haystack + 1;
			cpy_s2 = (void *)needle + 1;
			while (*cpy_s1 == *cpy_s2 && *cpy_s1 && *cpy_s2)
			{
				cpy_s1++;
				cpy_s2++;
			}
			if (!*cpy_s2)
				return ((void *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
