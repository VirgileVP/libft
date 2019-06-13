/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 04:15:18 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 06:05:41 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		map[count] = (*f)(s[count]);
	return (map);
}
