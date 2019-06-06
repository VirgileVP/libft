/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcutlen.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vveyrat- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 13:39:39 by vveyrat-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 15:44:57 by vveyrat-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcutlen(const char *s, char c)
{
	unsigned long	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}
