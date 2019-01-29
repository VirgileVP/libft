/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 17:35:09 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 01:45:22 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*memstr;

	memstr = NULL;
	while (*str)
	{
		if (*str == (char)c)
			memstr = (char *)str;
		str++;
	}
	if (*str == (char)c)
		memstr = (char *)str;
	return (memstr);
}
