/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 13:51:18 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 16:19:40 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*loc_cpy;
	int		count;

	count = 0;
	if (s)
	{
		if (!(loc_cpy = (char *)MALLOC(sizeof(*loc_cpy) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[count])
		{
			loc_cpy[count] = s[count];
			count++;
		}
		loc_cpy[count] = '\0';
		return (loc_cpy);
	}
	else
		return (NULL);
}
