/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fstrjoin.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/24 15:24:08 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:24:16 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fstrjoin(char **s1, char **s2, int free_s1, int free_s2)
{
	int		entire_len;
	char	*joined_str;
	int		first_str_len;

	first_str_len = ft_strlen(*s1);
	entire_len = first_str_len + ft_strlen(*s2);
	if (!(joined_str = (char *)malloc(sizeof(char) * entire_len + 1)))
		return (NULL);
	ft_strncpy(joined_str, *s1, first_str_len);
	ft_strcpy(joined_str + first_str_len, *s2);
	if (free_s1)
	{
		free(*s1);
		*s1 = NULL;
	}
	if (free_s2)
	{
		free(*s2);
		*s2 = NULL;
	}
	return (joined_str);
}
