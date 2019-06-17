/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_strdigit.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/06/17 16:15:54 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/06/17 16:15:58 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_strdigit(char *str)
{
	int count;

	count = 0;
	if (str)
	{
		while (str[count])
		{
			if (ft_isdigit(str[count]) == 0)
				return (0);
			count++;
		}
		return (1);
	}
	return (0);
}
