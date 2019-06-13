/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 02:37:12 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 06:06:08 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	size_t	len;
	char	*map;

	if (!s)
		return (NULL);
	count = -1;
	len = ft_strlen(s);
	if (!(map = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	map[len] = '\0';
	while (s[++count])
		map[count] = (*f)(count, s[count]);
	return (map);
}
