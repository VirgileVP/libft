/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/24 15:28:52 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/24 15:28:53 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strmove :
**
** Remove the fisrt part of the string from a new given start.
** Fill the end with '\0'.
*/

void	ft_strmove(char *begin_str, char *new_begin)
{
	size_t	new_len;

	new_len = ft_strlen(new_begin);
	ft_memmove(begin_str, new_begin, new_len);
	ft_bzero(begin_str + new_len, new_begin - begin_str);
}
