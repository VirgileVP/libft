/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 20:14:57 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:27:55 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	int				end;

	if (!s)
		return (NULL);
	if (*s == '\0')
		return ("\0");
	start = 0;
	end = (int)ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n') &&
			s[start])
		start++;
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') && s[end] &&
			end > (int)start)
		end--;
	return (ft_strsub(s, start, (end - start + 1)));
}
