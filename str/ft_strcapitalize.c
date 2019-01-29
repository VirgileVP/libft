/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/24 15:24:20 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:25:27 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *s)
{
	int	count;

	count = 0;
	if (s)
	{
		while (s[count])
		{
			s[count] = ft_toupper(s[count]);
			count++;
		}
	}
	return (s);
}
