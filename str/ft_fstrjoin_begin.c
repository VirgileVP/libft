/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_fstrjoin_begin.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/08 13:42:30 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/07 13:38:30 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fstrjoin_begin(char *s1, char **s2)
{
	int		entire_len;
	char	*joined_str;
	int		first_str_len;

	first_str_len = ft_strlen(s1);
	entire_len = first_str_len + ft_strlen(*s2);
	if (!(joined_str = (char *)malloc(sizeof(char) * (entire_len + 1))))
		return (NULL);
	ft_strncpy(joined_str, s1, first_str_len);
	ft_strcpy(joined_str + first_str_len, *s2);
	free(*s2);
	*s2 = NULL;
	return (joined_str);
}
