/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strpbrk.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/24 15:27:46 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:27:48 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpbrk(const char *str, const char *charset)
{
	while (*str)
	{
		if (ft_incharset(*str, charset))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
